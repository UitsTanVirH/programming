#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    int s=n;
    for(int i=n+1; i>0; i--){
        ans+=n+1;
        n--;
    }
    ans+=s;
    cout<<ans<<endl;
    return 0;
}
