#include <bits/stdc++.h>
#define mx 1000002 //non prime
#define MX 78507 //prime
using namespace std;

bool status[mx];
int cnt=0, prime[MX];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0){
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
	int j=0;
	for(int i=1; i<mx; i++){
        if(status[i]==0){
            prime[j]=i;
            j++;
        }
	}
}

int binary(int p){
    int b=0, e=MX-1;
    while(b<e){
        int mid=(b+e)/2;
        if(prime[mid]<p)
            b=mid+1;
        else e=mid;
    }
    return prime[e];
}

int main(){
    siv();
    vector<int>v;
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int mn=0;
    for(int k=0; k<n; k++){
        for(int j=0; j<m; j++){
            if(status[arr[k][j]]==0)
                mn+=0;
            else{
                int p=arr[k][j];
                int c=binary(p);
                mn+=c-p;
            }
        }
        v.push_back(mn);
        mn=0;
    }
    //n=3, m=5;
    for(int k=0; k<m; k++){
        for(int j=0; j<n; j++){
            if(status[arr[j][k]]==0)
                mn+=0;
            else{
                int p=arr[j][k];
                int c=binary(p);
                mn+=c-p;
            }
        }
        v.push_back(mn);
        mn=0;
    }
    sort(v.begin(), v.end());
    cout<<v[0]<<endl;
    return 0;
}
