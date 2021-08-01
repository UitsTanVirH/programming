#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int T, a, b;
    cin>>T;
    while(T--){
        cin>>a>>b;
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else printf("=\n");
    }
    return 0;
}
