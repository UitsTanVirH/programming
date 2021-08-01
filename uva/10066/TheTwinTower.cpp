#include <bits/stdc++.h>
#define mx 107
using namespace std;

int n1, n2;
int arr[mx], arr2[mx];
int dp[mx][mx];
bool visited[mx][mx];
int lcs(int i, int j){
    if(i==n1 || j==n2) return 0;
    if(visited[i][j]) return dp[i][j];
    int ans=0;
    if(arr[i]==arr2[j]) ans=1+lcs(i+1, j+1);
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
    char c='#';
    while(cin>>n1>>n2){
        if(n1==0 && n2==0)
            return 0;
        for(int i=0; i<n1; i++)
            cin>>arr[i];
        for(int i=0; i<n2; i++)
            cin>>arr2[i];
        memset(dp, -1, sizeof dp);
        memset(visited, 0, sizeof visited);
        printf("Twin Towers %c%d\n", c, ++t);
        printf("Number of Tiles : %d\n", lcs(0, 0));
        printf("\n");
    }
    return 0;
}

