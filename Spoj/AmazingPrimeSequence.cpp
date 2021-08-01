#include <bits/stdc++.h>
#define L long long
#define mx 10000007
using namespace std;

L a[mx], f[mx];
bool status[mx];
void siv()
{
	L N=mx;
	L sq=sqrt(N);
	for(L i=4;i<=N;i+=2){
        status[i]=1;
        f[i]=2;
	}
	f[2]=2;
	for(L i=3;i<=N;i+=2){
		if(status[i]==0)
		{
		    f[i]=i;
			for(L j=i*i;j<=N;j+=i){
                if(status[j]==0)
                    f[j]=i;
                status[j]=1;
			}
		}
	}
	status[1]=1;
	a[0]=a[1]=0;
	for(L i=2; i<mx; i++){
        a[i]=a[i-1]+f[i];
	}

}

int main(){
    siv();
    //for(int i=0; i<=10000; i++)
      //  cout<<f[i]<<" ";
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        cout<<a[n]<<endl;
    }
    return 0;
}
