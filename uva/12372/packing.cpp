#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, T, t=0;
    cin>>T;
    while(T--){
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n", ++t);
        else printf("Case %d: bad\n", ++t);
    }
    return 0;
}
