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
    cin>>n;
    for(int i=1; i<=n; i++){
        if(status[i]==0)
            cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}

