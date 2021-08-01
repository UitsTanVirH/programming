#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int w, h, n;
        cin>>w>>h>>n;
        int cnt=1;
        while(w%2==0){
            w/=2;
            cnt*=2;
        }
        //cout<<cnt<<endl;
        while(h%2==0){
            h/=2;
            cnt*=2;
        }
        //cout<<cnt<<endl;
        if(cnt>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
