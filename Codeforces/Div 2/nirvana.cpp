#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    LL n;
    cin>>n;
    LL ans=1;
    LL cnt=0;
    LL store=n;
    LL check=n;
    for(int i=0; ; i++){
        if(n==0)
            break;
        if(n%10==0){
            cnt=i+1;
        }
        n/=10;
        //cout<<"i = "<<i<<endl;
    }
    //cout<<cnt<<endl;
    for(int i=0; i<cnt; i++)
        ans*=9;

    for(int i=0; i<cnt; i++)
        store/=10;
    //cout<<n<<" "<<store<<endl;
    if(cnt){
        if(store>1)
            store--;
    }
    for(int i=0; ; i++){
        if(store==0)
            break;
        ans*=store%10;
        store/=10;
    }
    if(check<10)
        cout<<check<<endl;
    else cout<<ans<<endl;
    return 0;
}
