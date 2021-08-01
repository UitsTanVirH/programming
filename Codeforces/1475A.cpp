#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool status[1000002];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==1) cout<<"YES"<<endl;
        else{
            ll mark=n/2;
            if(mark%2==1 && n!=2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;

}
