#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    sort(arr, arr+n);
    for(int i=1; i<n; i++){
        if(arr[i]-arr[i-1]>0)
            sum+=arr[i]-arr[i-1]-1;
    }
    cout<<sum<<endl;
    return 0;
}