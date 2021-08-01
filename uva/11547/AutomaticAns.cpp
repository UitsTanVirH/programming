#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        ll a;
        cin>>a;
        ll ans=((((a*567)/9+7492)*235)/47-498)/10;
        cout<<abs(ans%10)<<endl;
    }
}
