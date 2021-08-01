#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len=s.size();
    int cnt=0, ans=0;
    for(int i=0; i<len; i++){
        if(s[i]=='U') cnt++;
        else if(s[i]=='D') cnt--;
        if(cnt==0 && s[i]=='U') ans++;
    }
    cout<<ans<<endl;
    return 0;
}
