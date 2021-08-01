#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        string k="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A' || s[i]=='B' || s[i]=='C')
                k+="2";
            else if(s[i]=='D' || s[i]=='E' || s[i]=='F')
                k+="3";
            else if(s[i]=='G' || s[i]=='H' || s[i]=='I')
                k+="4";
            else if(s[i]=='J' || s[i]=='K' || s[i]=='L')
                k+="5";
            else if(s[i]=='M' || s[i]=='N' || s[i]=='O')
                k+="6";
            else if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
                k+="7";
            else if(s[i]=='T' || s[i]=='U' || s[i]=='V')
                k+="8";
            else if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
                k+="9";
            else k+=s[i];
        }
        cout<<k<<endl;
    }
    return 0;
}
