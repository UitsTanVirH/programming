#include <bits/stdc++.h>
#define mx 107
using namespace std;

string A, B, ans;
int lenA, lenB;
int dp[mx][mx];
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
    while(getline(cin, A)){
        if(A[0]=='#')
            continue;
        getline(cin, B);
        lenA=A.size();
        lenB=B.size();
        memset(dp, -1, sizeof dp);
        lcs(0, 0);
        ans="";
    }
    return 0;
}


