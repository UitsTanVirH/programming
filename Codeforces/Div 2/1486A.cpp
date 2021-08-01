#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int min_dis=10000007, mark=0;
        for(int i=1; i<n; i++){
            if(arr[i]<=arr[i-1]){
                if(arr[i]-arr[i-1]<min_dis){
                    arr[i]+=arr[i]-arr[i-1];
                    min_dis=arr[i]-arr[i-1]-1;
                }
                else{
                    mark=1;
                    break;
                }
            }
            else{
                min_dis=arr[i]-arr[i-1]-1;
            }
        }
        if(!mark) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
