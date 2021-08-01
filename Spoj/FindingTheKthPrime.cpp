#include <bits/stdc++.h>
using namespace std;

bool status[87000008];
int arr[5000007];
void siv()
{
	int N=87000008;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
	arr[0]=2;
	int count=1;
	for(int i=3; ;i+=2){
        if(status[i]==0)
            arr[count++]=i;
        if(count==5000000)
            break;
	}

}

int main(){
    siv();
    int n, a;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &a);
        cout<<arr[a-1]<<endl;
    }
    return 0;
}

