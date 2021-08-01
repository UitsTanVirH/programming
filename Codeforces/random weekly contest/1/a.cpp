#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[101];
    int n, a, count=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1)
            count++;
    }
    for(int i=0; i<n; i++){
        if(arr[i]==1 && arr[i+1]==0 &&arr[i+2]==1)
            count++;
    }
    cout<<count<<endl;
}
