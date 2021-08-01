#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n, m;
        cin>>n>>m;
        ll sum=1;
        for(int i=0; i<m; i++){
            sum*=10;
        }
        double div=sum/9.0;
        ll ans=floor(div*n);
        cout<<ans<<endl;
    }
    return 0;
}

