#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a, b;
        cin>>a>>b;
        if(b<a) swap(a, b);
        int nw=b-a;
        if(nw){
            if(nw%10==0) cout<<nw/10<<endl;
            else cout<<nw/10+1<<endl;
        }
        else cout<<0<<endl;
    }
    return 0;
}
