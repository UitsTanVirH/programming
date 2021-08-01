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
    siv();
    int T, n;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        int mark=0;
        if(status[n]==0)
            mark=1;
        else{
            for(int i=2; i<=n; i++){
                if(status[i]==0){
                    if(status[n-i]==0 && n-i!=i){
                        printf("%d %d\n", i, n-i);
                        mark=1;
                        break;
                    }
                }
            }
        }
        if(mark==1)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
