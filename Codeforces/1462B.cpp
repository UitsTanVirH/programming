#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sz=s.size(), mark=0;
        if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
            cout<<"YES"<<endl;
        else if(s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0' && s[n-4]=='2')
            cout<<"YES"<<endl;
        else if(s[0]=='2' && s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0')
            cout<<"YES"<<endl;
        else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0')
            cout<<"YES"<<endl;
        else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
            cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }
    return 0;
}
