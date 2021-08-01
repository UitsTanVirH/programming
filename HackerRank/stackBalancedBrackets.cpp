#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<char>st;
    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(st.size()==0){
                if(s[i]==')' || s[i]=='}' || s[i]==']')
                    st.push(s[i]);
            }
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')'){
                s[i]='(';
                if(st.top()==s[i])
                    st.pop();
            }
            else if(s[i]=='}'){
                s[i]='{';
                if(st.top()==s[i])
                    st.pop();
            }
            else if(s[i]==']'){
                s[i]='[';
                if(st.top()==s[i])
                    st.pop();
            }
        }
        if(st.size()==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        while(!st.empty())
            st.pop();
    }

    return 0;
}
