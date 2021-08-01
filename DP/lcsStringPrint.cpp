#include <bits/stdc++.h>
#define mx 1007
using namespace std;

char A[mx], B[mx];
int lenA, lenB;
int dp[mx][mx];
bool visited[mx][mx];
string ans;
void lcs(int i, int j){
    if(A[i]=='\0' || B[j]=='\0'){
        cout<<ans<<endl;
        return;
    }
    if(A[i]==B[j]){
        ans+=A[i];
        lcs(i+1, j+1);
    }
    else{
        if(dp[i+1][j]>dp[i][j+1]) lcs(i+1, j);
        else lcs(i, j+1);
    }
}

int main(){
    while(scanf("%s %s", A, B)!=EOF){
        lcs(0, 0);
    }
    return 0;
}

