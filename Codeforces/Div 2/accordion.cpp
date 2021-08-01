#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=0, pos, ans, colon=0, temp=0; bool flag=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='['){
            cnt++;
            pos=i;
            break;
        }
    }
    for(int i=pos+1; i<s.size(); i++){
        if(s[i]==':'){
            cnt++;
            pos=i;
            break;
        }
    }
    for(int i=pos+1; i<s.size(); i++){
        if(s[i]==']'){
            cnt++;
            if(colon>1){
                ans=cnt-colon-temp+1;
                flag=1;
            }
            else if(colon==1) {
                ans=cnt-temp+1;
                flag=1;
            }
            break;
        }
        else if(s[i]==':'){
            colon++;
            //temp=0;
        }
        else if(s[i]=='|'){
            cnt++;
            //temp++;
        }

    }
    if(flag)
        cout<<ans<<endl;
    else cout<<"-1"<<endl;
}
