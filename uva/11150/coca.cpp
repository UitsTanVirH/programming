#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int ans=n, vagfol, flag=1;
        while(1){
            if(n==1) break;
            if(n==2 && !flag) break;
            if(n%3==2){
                if(flag) {
                    n+=1;
                    flag=0;
                }
                vagfol=n/3;
                ans+=vagfol;
                n=vagfol+n%3;
            }
            else{
                vagfol=n/3;
                ans+=vagfol;
                n=vagfol+n%3;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
