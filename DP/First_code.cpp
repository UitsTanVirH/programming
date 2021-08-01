#include <bits/stdc++.h>
using namespace std;

int dp[50];

int fibo_dp(int n){
    if(n==0) return dp[n]=0;
    if(n==1) dp[n]=1;
    if(dp[n]!=-1)
        return dp[n];
    else
        return dp[n]=fibo_dp(n-1)+fibo_dp(n-2);
}

int main(){
    memset(dp, -1, sizeof dp);
    int n;
    cin>>n;
    if(n==1)
        cout<<0<<endl;
    else{
        fibo_dp(n);
    cout<<dp[0];
    for(int i=1; i<n; i++)
        cout<<" "<<dp[i];
    cout<<endl;
    }

    return 0;
}
