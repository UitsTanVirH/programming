#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        int sum=n, vagfol;
        if(n<10) cout<<n<<endl;
        else{
            while(n>9){
                vagfol=n/10;
                sum+=vagfol;
                n-=vagfol*10;
                n+=vagfol;
            }
            cout<<sum<<endl;
        }

    }
    return 0;
}

