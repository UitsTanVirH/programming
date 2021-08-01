#include <bits/stdc++.h>
#define L long long
using namespace std;

int main(){
    L n;
    while(scanf("%lld", &n) && n!=0){
        L root;
        root=sqrt(n);
        if(root*root==n)
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

