#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll M;
ll Bigmod(ll N,ll P){
	if(P==0) return 1;
	if(P%2==0){
		ll ret=Bigmod(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(Bigmod(N,P-1)%M))%M;

}

int main(){
    ll N, P;
    while(scanf("%lld", &N)!=EOF){
        cin>>P>>M;
        int c=Bigmod(N, P);
        cout<<c<<endl;
    }

    return 0;

}

