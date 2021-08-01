#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+7];
    memset(arr, 0, sizeof arr);
    for(int i=1; i<=n; i++) cin>>arr[i];
    int zp=0, subarr=-1;
    for(int i=1; i<=n+1; i++){
        if(arr[i]==0){
            if(subarr<i-zp-1) subarr=i-zp-1;
            zp=i;
        }
    }
    cout<<subarr<<endl;
    return 0;
}
