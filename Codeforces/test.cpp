#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int cnt=0;
        for(int i=0; i<n-1; i++){
            printf("%d\n", arr[i]&arr[i+1]);
            //cout<<a<<endl;
        }

    }
    return 0;
}

