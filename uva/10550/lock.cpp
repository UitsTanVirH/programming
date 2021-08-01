#include <bits/stdc++.h>
using namespace std;

int main(){
    int init, a, b, c;
    while(cin>>init){
        cin>>a>>b>>c;
        if(init==0 && a==0 && b==0 && c==0) return 0;
        int ans=1080;
        if(init-a>0) ans+=(init-a)*9;
        else ans+=(init-a+40)*9;
        if(b-a>0) ans+=(b-a)*9;
        else ans+=(b-a+40)*9;
        if(b-c>0) ans+=(b-c)*9;
        else ans+=(b-c+40)*9;
        cout<<ans<<endl;

    }
    return 0;
}

