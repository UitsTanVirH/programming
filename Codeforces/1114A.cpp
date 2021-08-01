#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, d, m;
    cin>>a>>d>>m;
    int grn, ppl, blk, extra;
    cin>>grn>>ppl>>blk;
    if(a<=grn){
        grn-=a;
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
    if(grn+ppl>=d){
        extra=grn+ppl-d;
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
    if(extra+blk>=m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
}
