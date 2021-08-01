#include <bits/stdc++.h>
using namespace std;

bool status[10000007];
void siv()
{
	int N=10000000;
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
    siv();
    int n;
    while(scanf("%d", &n)!=EOF){
        if(n<8)
            printf("Impossible\n");

        else{
            int mid=n/2;
            int other_mid=n-mid;
            int a, b, c, d, count=0;
            for(int i=2; i<=mid; i++){
                if(status[i]==0){
                    b=mid-i;
                    while(b>1){
                        if(status[b]==0){
                            a=i;
                            count++;
                            goto ANS;
                        }
                        b--;
                    }
                }
            }
            ANS:
            for(int i=2; i<=other_mid; i++){
                if(status[i]==0){
                    d=other_mid-i;
                    while(d>1){
                        if(status[d]==0){
                            c=i;
                            count++;
                            goto NEXT;
                        }
                        d--;
                    }
                }
            }
            NEXT:
            if(count==2)
                printf("%d %d %d %d\n", a, b, c, d);
            else
                printf("Impossible\n");
        }

    }
    return 0;

}
