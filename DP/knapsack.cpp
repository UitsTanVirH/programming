#include <bits/stdc++.h>
using namespace std;

int dp[50][50], n=5;
int cost[20]={120, 400, 280, 150, 200}, weight[20]={1, 7, 4, 3, 4};

int func(int i, int w){
    if(i>=n) return 0;
    if(w<=0) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    if(w-weight[i]<0) return func(i+1, w);
    else{
        dp[i][w]=max(cost[i]+func(i+1, w-weight[i]), func(i+1, w));
        return dp[i][w];
    }
}

int main(){
    memset(dp, -1, sizeof dp);
    cout<<func(0, 10)<<endl;
    return 0;
}
