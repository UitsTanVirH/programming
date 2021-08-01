#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b!=0) return gcd(b, a%b);
    else return a;
}

int main(){
    int T, t=0;
    scanf("%d", &T);
    while(T--){
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int ctch=gcd(abs(x), abs(y));
        if(z%ctch==0) printf("Case %d: Yes\n", ++t);
        else printf("Case %d: No\n", ++t);
    }
    return 0;
}
