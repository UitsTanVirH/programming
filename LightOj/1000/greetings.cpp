#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, a, b, t=1;
    cin>>T;
    while(T--){
        cin>>a>>b;
        printf("Case %d: ", t);
        printf("%d\n", a+b);
        t++;
    }
    return 0;

}
