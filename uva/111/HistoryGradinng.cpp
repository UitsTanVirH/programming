#include <bits/stdc++.h>
#define mx 23
using namespace std;

int A[mx], B[mx];
int n, lenA, lenB;
int dp[100][100];
bool visited[100][100];
int lcs(int i, int j){
    if(i==n+1 || j==n+1) return 0;
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
    int x;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        A[x]=i;
    }
    while(scanf("%d", &x)==1){
        B[x]=1;
        for(int i=2; i<=n; i++){
            cin>>x;
            B[x]=i;
        }
        memset(dp, -1, sizeof dp);
        memset(visited, 0, sizeof visited);
        cout<<lcs(1, 1)<<endl;
    }
    return 0;
}
