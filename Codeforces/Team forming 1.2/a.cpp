#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, a, b, c, d;
        cin>>n>>a>>b>>c>>d;
        int val=2*(a+b+c+d);
        //cout<<N<<endl;
        if(val>=n+1)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
