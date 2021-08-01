#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin>>s;
    int len=s.size();
    int x=1, y=1;
    for(int i=0; i<len; i++){
        if(s[i]=='1'){
            x+=1;
            y+=2;
        }
        else{
            x-=1;
            y-=2;
            if(y<=1){
                cout<<"Dead_Bird"<<endl;
                return 0;
            }
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
