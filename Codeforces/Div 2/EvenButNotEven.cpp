#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, sum=0;
        cin>>n;
        string s, k="";
        cin>>s;
        int len=s.size();
        for(int i=0; i<len; i++){
            sum+=s[i]-'0';
        }
        if(sum%2==0 && s[0]!='0') cout<<s<<endl;
        //else if(len==1) cout<<"-1"<<endl;
        else{
            int flag=0;
            for(int i=len; i>=0; i--){
                int a=s[i]-'0';
                if(a==0 || a%2==1){
                    if(!flag){
                        if(a%2==1){
                            flag=1;
                        }
                    }
                    else k+=s[i];
                }
                else k+=s[i];
            }
            reverse(k.begin(), k.end());
            if(flag){
                k.pop_back();
                if(k.size()>0) cout<<k<<endl;
                else cout<<"-1"<<endl;
            }
            else cout<<"-1"<<endl;
        }
    }
    return 0;
}
