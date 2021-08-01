#include <bits/stdc++.h>
#define mx 1007
using namespace std;

int cost[mx], weight[mx], g, n, cap;
int dp[mx][30];

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
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>cost[i]>>weight[i];
        }
        cin>>g;
        int sum=0;
        while(g--){
            cin>>cap;
            memset(dp, -1, sizeof dp);
            sum+=func(0, cap);
        }
        cout<<sum<<endl;
    }
    return 0;
}
