#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, t=0;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr, arr+n);
        int mid=n/2;
        printf("Case %d: %d\n", ++t, arr[mid]);
    }
    return 0;
}
