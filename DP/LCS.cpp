#include <bits/stdc++.h>
#define mx 1007
using namespace std;

char A[mx], B[mx];
int lenA, lenB;
int dp[mx][mx];
bool visited[mx][mx];
int lcs(int i, int j){
    if(A[i]=='\0' || B[j]=='\0') return 0;
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
    while(scanf("%s %s", A, B)!=EOF){
        cout<<lcs(0, 0)<<endl;
    }
    return 0;
}
