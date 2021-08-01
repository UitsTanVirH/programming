#include <bits/stdc++.h>
#define i64 long long
using namespace std;

i64 M;
i64 Bigmod(i64 N,i64 P){
	if(P==0) return 1;
	if(P%2==0){
		i64 ret=Bigmod(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(Bigmod(N,P-1)%M))%M;

}

int main(){
    i64 N, P;
    while(scanf("%lld", &N)!=EOF){
        cin>>P>>M;
        int c=Bigmod(N, P);
        cout<<c<<endl;
    }

    return 0;

}
