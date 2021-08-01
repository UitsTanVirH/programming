#include <bits/stdc++.h>
#define LL long long
using namespace std;

int ans=0;
int make(int a, char ch){
    if(ch=='+')
        return ans+=a;
    else if(ch=='-')
        return ans-=a;
    else if(ch=='*')
        return ans*=a;
    else if(ch=='/')
        return ans/=a;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        LL a;
        char ch, prev_ch;
        cin>>a>>ch;
        prev_ch='+';
        while(1){
            if(ch=='='){
                cout<<make(a, prev_ch)<<endl;
                ans=0;
                break;
            }
            else{
                make(a, prev_ch);
                prev_ch=ch;
                cin>>a>>ch;
            }
        }
    }
}
