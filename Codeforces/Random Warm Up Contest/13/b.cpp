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
    int n, m;
    cin>>n>>m;
    int arr[53], j=0;
    for(int i=2; j<51; i++){
        if(status[i]==0){
            arr[j]=i;
            j++;
        }
    }
    for(int i=0; ;i++){
        if(arr[i]==n){
            if(arr[i+1]==m){
                cout<<"YES"<<endl;
                break;
            }

            else{
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;

}
