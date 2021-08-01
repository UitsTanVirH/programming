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
        printf("Case %d: %d\n", ++t, arr[n-1]);
    }
    return 0;
}
