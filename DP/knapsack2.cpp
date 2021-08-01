#include <bits/stdc++.h>
using namespace std;

int dp[20][20];
int cost[50]={120,400,280,150,200},w[50]={1,7,4,3,4};
int n;

int call(int i,int wt){
    if(i>=n) return 0;
    if(wt<=0) return 0;
    if(dp[i][wt] != -1) return dp[i][wt];
    if(wt-w[i]<0) return call(i+1,wt);
    return dp[i][wt]=max(cost[i]+call(i+1,wt-w[i]),call(i+1,wt));

}

int main(){
    memset(dp,-1,sizeof dp);
    n=5;
    cout << call(0,10) << endl;
    return 0;
}
