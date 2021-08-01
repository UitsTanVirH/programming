#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string>st;
    string line;

    while(getline(cin,line)){
        string s="";
        for(int i=0; i<line.size(); i++){
            if(line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z')
                s+=line[i];
            else{
                for(int j=0; j<s.size(); j++){
                    if(s[j]>='A' && s[j]<='Z')
                        s[j]+=s[j]-'A'+'a';
                }
                st.insert(s);
                s="";
            }
        }
    }

    set<string>:: iterator it;
    for(it=st.begin(); it!=st.end(); it++)
        cout<<*it<<endl;

    return 0;
}

