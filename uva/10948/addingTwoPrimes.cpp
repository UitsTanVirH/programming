#include <bits/stdc++.h>
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
    int n, count=0, a, b;
    siv();
    while(scanf("%d", &n) && n!=0){
            int count=0;
        for(int i=2; i<n; i++){
            if(status[i]==0){
                b=n-i;
                if(status[b]==0){
                    a=i;
                    count++;
                    break;
                }
            }
        }
        if(count>0){
            printf("%d:\n", n);
            printf("%d+%d\n", a, b);
        }
        else{
            printf("%d:\n", n);
            cout<<"NO WAY!"<<endl;
        }

    }
    return 0;

}

