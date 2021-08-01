#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    int first=arr[1]-arr[0];
    int second=arr[n-1]-arr[n-2];
    if(first>=second)
        cout<<arr[n-1]-arr[1]<<endl;
    else cout<<arr[n-2]-arr[0]<<endl;
    return 0;
}

