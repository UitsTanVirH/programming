#include <bits/stdc++.h>
#define inf 100000007
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<string>s(n);
    map<string, int>mp;
    mp["A"]=mp["B"]=mp["C"]=inf;
    mp["AB"]=mp["BC"]=mp["AC"]=inf;
    mp["ABC"]=inf;
    for(int i=0; i<n; i++){
        cin>>v[i]>>s[i];
        sort(s[i].begin(), s[i].end());
        mp[s[i]]=min(mp[s[i]], v[i]);
    }
    int ans=mp["A"]+mp["B"]+mp["C"];
    ans=min(ans, mp["AB"]+mp["C"]);
    ans=min(ans, mp["AC"]+mp["B"]);
    ans=min(ans, mp["BC"]+mp["A"]);
    ans=min(ans, mp["AB"]+mp["BC"]);
    ans=min(ans, mp["BC"]+mp["AC"]);
    ans=min(ans, mp["AC"]+mp["AB"]);
    ans=min(ans, mp["ABC"]);
    if(ans==inf)
        ans=-1;
    cout<<ans<<endl;
    return 0;
}
