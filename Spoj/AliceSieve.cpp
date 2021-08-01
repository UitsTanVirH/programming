#include <bits/stdc++.h>
#define mx 1000000
using namespace std;

bool status[mx];
int prime[mx];
void siv()
{
	int N=mx;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0){
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	int j=1;
    for(int i=2; i<mx; i++){
        if(!status[i]){
            prime[i]=j;
            j=i;
        }
        else{
            prime[i]=j;
        }
    }
}

int main(){
    siv();
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<(n+1)/2<<endl;
    }
    return 0;
}
