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
    long long int n, a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        int count=0;
        if(status[a]!=0){
            for(int j=1; j*j<=n; j++){
                if(a%j==0)
                    count++;
                if(count==4)
                    break;
            }

        }

    }
        if(count==3)
            printf("YES\n");
        else
            printf("NO\n");

        return 0;
}



