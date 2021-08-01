
#include <bits/stdc++.h>
using namespace std;

bool status[1000002];
void siv(int n)
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
    int n, count=0, a, b;
    siv(n);
    while(scanf("%d", &n) && n!=0){
        for(int i=3; i<=n; i++){
            if(status[i]==0){
                b=n-i;
                if(status[b]==0){
                    a=i;
                    break;
                }
            }
        }
        cout<<n<<" = "<<a<<" + "<<b<<endl;

    }
    return 0;

}
