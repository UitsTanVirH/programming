#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int len=s.size();
        if(s=="4" || s=="1" || s=="78") cout<<'+'<<endl;
        else if(len>2 && s[len-1]=='5' && s[len-2]=='3'){
            cout<<'-'<<endl;
        }
        else if(len>3 && s[0]=='1' && s[1]=='9' && s[2]=='0'){
            cout<<'?'<<endl;
        }
        else{
            cout<<'*'<<endl;
        }
    }
}
