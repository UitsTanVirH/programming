#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    while(getline(cin, s) && s!="DONE"){
        t="";
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=32;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z')
                t+=s[i];
        }
        int sz, count=0;
        if(t.size()%2==0)
            sz=t.size()/2;
        else sz=t.size()/2+1;

        for(int i=0, j=t.size()-1; i<sz; i++, j--){
            if(t[i]==t[j])
                count++;
        }
        if(count==sz)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
    }
    return 0;

}

