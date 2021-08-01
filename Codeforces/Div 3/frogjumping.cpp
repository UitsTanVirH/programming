#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    LL T, a, b, k, even, odd, ans;
    cin>>T;
    while(T--){
        cin>>a>>b>>k;
        if(k%2==0){
            even=odd=k/2;
        }
        else {
            odd=k/2;
            even=odd+1;
        }
        ans=(even*a)-(odd*b);
        cout<<ans<<endl;
    }
}
