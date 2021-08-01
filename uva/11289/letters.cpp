#include <bits/stdc++.h>
using namespace std;

int main(){
    int i=0, T;
    string s;
    cin>>T;
    while(T--){
        cin>>s;
        if(s.size()==5)
            cout<<"3"<<endl;
        else if(s[i]=='o' && s[i+1]=='n' || s[i+1]=='n' && s[i+2]=='e' || s[i]=='o' && s[i+2]=='e')
            cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
}
