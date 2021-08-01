#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, ans="";
    int n;
    cin>>n>>s;
    int j=1;
    for(int i=0; i<s.size(); i+=j){
        ans+=s[i];
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
