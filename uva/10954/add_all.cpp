#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, a;
    while(scanf("%lld", &n) && n!=0){
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr, arr+n);
        a=arr[0]+arr[1];
        long long int sum=a;
        for(int i=2; i<n; i++){
            a=a+arr[i];
            sum+=a;
        }
        cout<<sum<<endl;
    }
    return 0;
}
