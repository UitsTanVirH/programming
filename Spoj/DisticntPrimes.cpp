#include <bits/stdc++.h>
#define mx 1000007
using namespace std;

bool status[mx];
int arr[mx], ans[mx], cnt=1;
void siv(){
    memset(arr, 0, sizeof arr);
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4; i<=N; i+=2){
        status[i]=1;
        arr[i]++;
	}
	for(int i=3; i<=sq; i+=2){
		if(status[i]==0){
			for(int j=i*2; j<=N; j+=i){
                status[j]=1;
                arr[j]++;
			}
		}
	}
	status[1]=1;

}

int main(){
    siv();
    int T;
    scanf("%d", &T);
    while(T--){
        int n, cnt=0;
        scanf("%d", &n);
        for(int i=30; ; i++){
            if(arr[i]>2)
                ++cnt;
            if(cnt==n){
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}
