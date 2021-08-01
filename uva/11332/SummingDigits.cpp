#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    while(cin>>n){
        if(n==0) return 0;
        int sum=0, ans;
        while(1){
            ans=n;
            if(ans/10==0) break;
            while(n){
                sum+=n%10;
                n/=10;
            }
            n=sum;
            sum=0;
        }
        cout<<ans<<endl;
    }

    return 0;
}
