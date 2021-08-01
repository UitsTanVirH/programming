#include <bits/stdc++.h>
#define mx 10007
#define M 10000007
using namespace std;

int dp[mx];

int a, b, c, d, e, f;
int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1)
        return dp[n];
    else
        return dp[n]=( fn(n-1)%M + fn(n-2)%M + fn(n-3)%M + fn(n-4)%M + fn(n-5)%M + fn(n-6)%M )%M;
}
int main() {
    memset(dp, -1, sizeof dp);
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % M);
        memset(dp, -1, sizeof dp);
    }
    return 0;
}
