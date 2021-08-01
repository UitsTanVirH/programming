#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        ll ans=1;
        for(int i=0; i<n; i++){
            ans*=arr[i]%mod;
            ans%=mod;
        }
        cout<<ans<<endl;
    }

    return 0;
}
