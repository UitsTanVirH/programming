#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    string s;
    cin>>T;
    while(T--){
        cin>>s;
        stack <char> st;
        for(int i=0; i<s.size(); i++){
            if(st.size()==0){
                if(s[i]==')' || s[i]==']')
                    st.push(s[i]);
            }
            if(s[i]=='(' || s[i]=='[')
                st.push(s[i]);
            else {
                if(s[i]==')'){
                    s[i]='(';
                    if(st.top()==s[i])
                        st.pop();
                }
                else {
                    s[i]='[';
                    if(st.top()==s[i])
                        st.pop();
                }
            }
        }
    if(st.size()==0)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    return 0;
}
