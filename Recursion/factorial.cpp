#include <bits/stdc++.h>
#define i64 long long
using namespace std;

int M=1000000007;
int factorial(int n){
    if(n > 1)
        return ((n%M) * (factorial(n - 1))%M)%M;
    else
        return 1;
}

int main(){
    int T, n, t=0;
    cin>>T;
    while(T--){
        cin>>n;
        if(n==1)
            printf("Case #%d: 1\n", ++t);
        else
            printf("Case #%d: %d\n", ++t, factorial(n)*2);
    }
    return 0;
}
