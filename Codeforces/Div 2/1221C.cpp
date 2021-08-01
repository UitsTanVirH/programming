#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int a, b, c, ans=0;
        cin>>a>>b>>c;
        if(a>=c && b>=c){
            ans+=c;
            a-=c;
            b-=c;
            if(a*2==b) ans+=a;
            else{
                ans+=(min(a, b))/2;
                if(a%2!=0 || b%2!=0) ans+=1;
            }

        }
        else ans=min(a, b);
        cout<<ans<<endl;
    }
    return 0;
}


