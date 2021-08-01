#include <bits/stdc++.h>
using namespace std;

bool status[20000005];
void siv()
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
    siv();
    map<int, int>mp;
    int i;
    int n, a, b, num=1;
    for(int i=3; i<20000000; i+=2){
        if(status[i]==0){
            if(status[i+2]==0){
                mp[num++]=i;
            }
        }
    }
    while(scanf("%d", &n)!=EOF)
        cout<<"("<<mp[n]<<", "<<mp[n]+2<<")"<<endl;

    return 0;
}
