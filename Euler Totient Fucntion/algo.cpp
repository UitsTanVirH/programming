#include <bits/stdc++.h>
#define mx 1000006
using namespace std;

int phi[mx], mark[mx];
void sievephi(int n){
    int i, j;
    for(i=1; i<=n; i++) phi[i]=i;
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
    int n;
    cin>>n;
    sievephi(n);
    cout<<phi[n]<<endl;
    return 0;
}
