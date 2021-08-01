#include <bits/stdc++.h>
#define i64 long long
using namespace std;

i64 m;
i64 bigmod(i64 a, i64 n){
    if(n==0) return 1;
    if(n==1) return n;
    int ans=bigmod(a, n/2);
    ans=(ans*ans)%m;
    ans=(ans*a)%m;
    return ans;
}
int main(){
    i64 a, n;
    cin>>a>>n>>m;
    int c=bigmod(a, n);
    cout<<c<<endl;
    return 0;
}
