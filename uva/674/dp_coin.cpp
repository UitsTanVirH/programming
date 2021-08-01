#include <bits/stdc++.h>
#define mx 7490
using namespace std;

int coin[5]={50, 25, 10, 5, 1};
int make;
int dp[5][mx];//size of dp array coins*make

int call(int i, int amount){
    if(i>=5){
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount-coin[i]>=0) ret1=call(i,amount-coin[i]);
    ret2=call(i+1,amount);
    return dp[i][amount]=ret1+ret2;
}

int main(){
    memset(dp, -1, sizeof dp);
    while(cin>>make){
        if(make==0)
            cout<<1<<endl;
        else{
            cout<<call(0, make)<<endl;
        }
    }
    return 0;
}
