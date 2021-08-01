#include <bits/stdc++.h>
using namespace std;

bool status[20000005];
void siv(int n)
{
	int N=20000000;
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
    int n, a, b;
    siv(n);
    while(scanf("%d", &n)!=EOF){
        int count=0;
        for(int i=3; i<20000000; i+=2){
            if(status[i]==0){
                b=i+2;
                if(status[b]==0){
                    a=i;
                    count++;
                }
            }
            if(count==n)
                    break;
        }
        cout<<"("<<a<<", "<<b<<")"<<endl;
    }

    return 0;
}
