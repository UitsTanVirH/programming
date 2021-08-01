#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int sz=s.size();
        if(s[sz-1]=='o') cout<<"FILIPINO"<<endl;
        else if(s[sz-1]=='u') cout<<"JAPANESE"<<endl;
        else cout<<"KOREAN"<<endl;
    }
    return 0;
}
