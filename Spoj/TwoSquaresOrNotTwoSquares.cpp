#include <bits/stdc++.h>
#define ll long long
using namespace std;

void twoSquare(ll n){
    ll sq=sqrt(n);
    ll i=0, j=0;
    while(sq>0){
        if(i*i>n){
            cout<<"No"<<endl;
            break;
        }
        else if(i*i+sq*sq==n){
            cout<<"Yes"<<endl;
            break;
        }
        else if(i*i+sq*sq<n){
            i++;
        }
        else sq--;
    }
}

int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        twoSquare(n);
    }
    return 0;
}

