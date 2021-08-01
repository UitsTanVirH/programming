#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, k;
        cin>>n>>k;
        int arr[k];
        int sum=0, temp;
        for(int i=0; i<k; i++){
            cin>>arr[i];
        }
        sort(arr, arr+k);
        for(int i=0; i<k; i++){
            if(sum+arr[i]<=n){
                sum+=arr[i];
                temp=arr[i];
            }
            else{
                if(sum>0){
                    if((sum-temp)+arr[i]<=n){
                        sum-=temp;
                        sum+=arr[i];
                        temp=arr[i];
                    }
                }
            }
        }
        int sum2=0;
        for(int i=k-1; i>=0; i--){
            if(arr[i]+sum2<=n) sum2+=arr[i];
        }
        cout<<max(sum2, sum)<<endl;
    }
    return 0;
}

