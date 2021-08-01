#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr, arr+n);
        int ans=((sum/n)-arr[0])+(arr[n-1]-arr[0])+(arr[n-1]-(sum/n));
        cout<<ans<<endl;
    }
    return 0;
}
