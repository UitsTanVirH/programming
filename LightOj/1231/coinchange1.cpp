#include <bits/stdc++.h>
#define mx 107
#define mod 100000007
using namespace std;

int coin[mx], times[mx];
int n, k;
int dp[mx][1005];
int call(int i,int amount)
{
    if(i>=n) { //All coins have been taken
        if(amount==0) return 1;
        return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount]; //no need to calculate same state twice
    dp[i][amount]=0;
    for(int j=0; j<=times[i] && amount-j*coin[i]>=0; j++){
        dp[i][amount]+=call(i+1, amount-j*coin[i])%mod;
    }
    return dp[i][amount]%mod; //storing and returning.
}
int main()
{
    memset(dp, -1, sizeof dp);
    int T, t=0;
    cin>>T;
    while(T--){
        cin>>n>>k;
        for(int i=0; i<n; i++)
            cin>>coin[i];
        for(int i=0; i<n; i++)
            cin>>times[i];
        memset(dp, -1, sizeof dp);
        printf("Case %d: %d\n", ++t, call(0, k));
    }
    return 0;
}

