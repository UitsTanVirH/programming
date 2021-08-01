#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string>st;
    string s;
    while(getline(cin, s)){
        string temp="", k=s+" ";
        for(int i=0; i<k.size(); i++){
            if(k[i]>='A' && k[i]<='Z'){
                k[i]+=32;
                temp+=k[i];
            }
            else if(k[i]>='a' && k[i]<='z'){
                temp+=k[i];
            }
            else{
                if(temp.size()>0)
                    st.insert(temp);
                temp="";
            }
        }

    }
    set<string> :: iterator it;
    for(it=st.begin(); it!=st.end(); it++)
        cout<<*it<<endl;

    return 0;
}
