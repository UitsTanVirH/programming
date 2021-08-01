#include <bits/stdc++.h>
using namespace std;

int coin[]={1,2,3,4,5};
int make;
int dp[6][100];
int call(int i,int amount)
{
    if(i>=5) {
        if(amount==make)return 1;
        return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount+coin[i]<=make) ret1=call(i,amount+coin[i]);
    ret2=call(i+1,amount);
    return dp[i][amount]=ret1+ret2;

}
int main()
{
    memset(dp,-1,sizeof(dp));
    while(cin>>make)
    {
        cout<<call(0,0)<<endl;
    }
    return 0;
}
