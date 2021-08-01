#include <bits/stdc++.h>
#define mx 1000006
using namespace std;

int phi[mx], mark[mx];
void sievephi(int n){
    int i, j;
    for(i=1; i<=n; i++) phi[i]=i;
    phi[1]=1;
    mark[1]=1;
    for(i=2; i<=n; i++){
        if(!mark[i]){
            for(j=i; j<=n; j+=i){
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

int main(){
    sievephi(mx);
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        printf("%d\n", phi[n]);
    }
}
