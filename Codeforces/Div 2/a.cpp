#include <bits/stdc++.h>
#define mx 1000000000000000000
#define ll long long
using namespace std;

ll x, y, k;

ll binary(ll b, ll e){
    //cout<<b<<"  "<< e<<endl;
    if(b==e) return b;
    ll steps=(b+e)/2;
    ll pred_need=x*steps-(steps-1);
    ll real_need=y*k+k;
    if(pred_need==real_need) return steps;
    else if(pred_need<real_need){
        binary(steps, e);
    }
    else{
        binary(b, steps);
    }

}

int main(){
    int T;
    cin>>T;
    while(T--){
        //ll x, y, k;
        cin>>x>>y>>k;
        ll st=y*k+k;
        ll c=binary(1, mx);
        cout<<c<<endl;
    }
    return 0;
}
