#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sz=s.size();
        if(s[sz/2]=='1'){
            for(int i=0; i<n; i++) cout<<1;
            cout<<endl;
        }
        else{
            for(int i=0; i<n; i++) cout<<0;
            cout<<endl;
        }
    }
    return 0;
}
