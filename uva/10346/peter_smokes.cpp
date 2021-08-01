#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n, k;
    while(scanf("%ld %ld", &n, &k)!=EOF){
        printf("%ld\n", n+((n-1)/(k-1)));
    }
    return 0;
}
