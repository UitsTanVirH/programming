#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string>mp;
    int n, m;
    string s, t, st;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>s>>t;
        if(s.size()<t.size())
            mp[s]=s;
        else
            mp[s]=t;

    }
    while(n--){
        cin>>s;
        cout<<mp[s]<<" ";
    }
    cout<<endl;
    return 0;

}

