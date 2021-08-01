#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, d;
        cin>>n>>d;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr, arr+n);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(arr[i]>d) cnt++;
        }
        if(arr[0]+arr[1]<=d) cout<<"YES"<<endl;
        else{
            if(cnt==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
