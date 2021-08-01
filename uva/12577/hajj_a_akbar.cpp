#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int t=0;
    while(cin>>s){
        if(s=="*")
            return 0;
        else if(s=="Hajj")
            printf("Case %d: Hajj-e-Akbar\n", ++t);
        else printf("Case %d: Hajj-e-Asghar\n", ++t);
    }
    return 0;
}
