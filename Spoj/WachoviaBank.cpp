#include <bits/stdc++.h>
using namespace std;

int n, k, m;
int dp[2000][2000];
int cost[10000], weight[10000];
int func(int i, int w){
    if(i>=m) return 0;
    if(w<=0) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    if(w-weight[i]<0) return func(i+1, w);
    else{
        dp[i][w]=max(cost[i]+func(i+1, w-weight[i]), func(i+1, w));
        return dp[i][w];
    }
}

int main(){
    cin>>n;
    memset(dp, -1, sizeof dp);
    while(n--){
        cin>>k>>m;
        int a, b;
        for(int i=0; i<m; i++){
            cin>>a>>b;
            weight[i]=a, cost[i]=b;
        }
        printf("Hey stupid robber, you can get %d.\n", func(0, k));
    }
    return 0;
}
