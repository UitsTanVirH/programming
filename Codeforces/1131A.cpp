#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    LL w1, h1, w2, h2, ans=0;
    cin>>w1>>h1>>w2>>h2;
    ans+=w1+w2+4+2*(h1+h2)+abs(w1-w2);
    cout<<ans<<endl;
    return 0;
}
