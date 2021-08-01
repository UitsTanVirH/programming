#include <bits/stdc++.h>
using namespace std;

int arr[107];
int main(){
    int n, a, b;
    cin>>n;
    int cnt=n;
    while(n--){
        cin>>a;
        for(int i=0; i<a; i++){
            cin>>b;
            arr[b]++;
        }
    }
    for(int i=0; i<101; i++){
        if(arr[i]==cnt)
            cout<<i<<" ";
    }

    return 0;
}
