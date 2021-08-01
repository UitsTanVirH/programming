#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, t=0;
    while(cin>>n){
        if(n==0)
            return 0;
        int given=0, not_given=0;
        while(n--){
            cin>>a;
            if(a>0)
                not_given++;
            else given++;
        }
        printf("Case %d: %d\n", ++t, not_given-given);
    }
    return 0;
}
