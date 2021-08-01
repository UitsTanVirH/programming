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
        map<char, int>mp;
        int sz=s.size(), mark=0;
        char cmp=s[0];
        for(int i=0; i<sz; i++){
            mp[s[i]]++;
            if(mp[s[i]]>1 && s[i]!=cmp){
                mark=1;
                break;
            }
            cmp=s[i];
        }
        if(!mark) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
