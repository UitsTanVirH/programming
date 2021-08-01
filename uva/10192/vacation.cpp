#include <bits/stdc++.h>
#define mx 107
using namespace std;

string A, B;
int lenA, lenB;
int dp[mx][mx];
bool visited[mx][mx];
int lcs(int i, int j){
    if(A[i]==lenA || B[j]==lenB) return 0;
    if(visited[i][j]) return dp[i][j];
    int ans=0;
    if(A[i]==B[j]) ans=1+lcs(i+1, j+1);
    else{
        int val1=lcs(i+1, j);
        int val2=lcs(i, j+1);
        ans=max(val1, val2);
    }
    dp[i][j]=ans;
    visited[i][j]=1;
    return dp[i][j];
}

int main(){
    int t=0;
    while(getline(cin, A) && A[0]!='#'){
        getline(cin, B);
        printf("Case #%d: you can visit at most %d cities.\n", ++t, lcs(0, 0));
        memset(dp, -1, sizeof dp);
        memset(visited, 0, sizeof visited);
    }
    return 0;
}

