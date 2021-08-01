#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a, b;
        cin>>a>>b;
        int ans=0;
        if(a>b) swap(a, b);
        if(b>a*2) cout<<a<<endl;
        else cout<<(a+b)/3<<endl;
    }
    return 0;
}
