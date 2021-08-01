#include <bits/stdc++.h>
using namespace std;

map<char, int>mp;
int main(){
    int cnt=0;
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0; i<len; i++){
        mp[s[i]]++;
        if(mp[s[i]]==1)
            cnt++;
    }
    //cout<<cnt<<endl;
    if(cnt%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
