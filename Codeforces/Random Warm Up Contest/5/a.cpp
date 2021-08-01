#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, k;
    cin>>s>>k;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    }
    for(int i=0; i<k.size(); i++){
        if(k[i]>='A' && k[i]<='Z')
            k[i]+=32;
    }

    if(s>k)
        cout<<"1"<<endl;
    else if(s==k)
        cout<<"0"<<endl;
    else cout<<"-1"<<endl;

    return 0;

}

