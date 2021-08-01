#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, k, l;
    cin>>n>>m>>k>>l;
    double ans, alt;
    alt=m;
    if(n-k>=l && n>=m && n-((ceil(l+k)/alt))*m>=0){
        ans=(l+k)/alt;
        cout<<ceil(ans)<<endl;
    }
    else cout<<"-1"<<endl;
    return 0;
}
