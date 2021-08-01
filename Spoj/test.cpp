#include <bits/stdc++.h>
using namespace std;

int dp[2000][2000];
int cost[60], w[60];
int m;
int call(int i,int wt){
    if(i>=m) return 0;
    if(wt<=0) return 0;
    if(dp[i][wt] != -1) return dp[i][wt];
    if(wt-w[i]<0) return call(i+1,wt);
    return dp[i][wt]=max(cost[i]+call(i+1,wt-w[i]),call(i+1,wt));
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k>>m;
        for(int i=0; i<m; i++)
            cin>>w[i]>>cost[i];
        memset(dp, -1, sizeof dp);
        printf("Hey stupid robber, you can get %d.\n", call(0, k));
    }
    return 0;
}

