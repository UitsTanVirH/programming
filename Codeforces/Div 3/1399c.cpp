#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int mark[55];
        memset(mark, 0, sizeof mark);
        for(int j=0; j<n; j++){
            for(int i=j, k=n-1; i<n; i++, k--){
                mark[arr[i]+arr[k]]+=1;
            }
        }
        for(int j=n-1; j>=0; j--){
            for(int i=j; i>)
        }
    }
    return 0;
}
