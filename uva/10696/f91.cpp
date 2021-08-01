#include <bits/stdc++.h>
using namespace std;

int func(int n){
    if(n>=101) return n-10;
    else {
        return func(func(n+11));
    }
}

int main(){
    int n;
    while(scanf("%d", &n) && n!=0){
        int s=n;
        int c=func(s);
        printf("f91(%d) = %d\n", n, c);
    }
    return 0;
}
