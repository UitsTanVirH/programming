#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>v;
void numbers(){
    for(int i=0; i<31; i++){
        v.push_back(pow(2, i));
    }
}

int main(){
    numbers();
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        ll del=0;
        for(int i=0; ; i++){
            if(v[i]<=n) del+=v[i];
            else break;
        }
        ll sum=(n*(n+1))/2-del;
        sum-=del;
        cout<<sum<<endl;
    }
    return 0;
}
