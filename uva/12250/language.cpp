#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    string s;
    while(cin>>s){
        if(s=="#")
            return 0;
        else if(s=="HELLO")
            cout<<"Case "<<++t<<": "<<"ENGLISH"<<endl;
        else if(s=="HOLA")
            cout<<"Case "<<++t<<": "<<"SPANISH"<<endl;
        else if(s=="HALLO")
            cout<<"Case "<<++t<<": "<<"GERMAN"<<endl;
        else if(s=="BONJOUR")
            cout<<"Case "<<++t<<": "<<"FRENCH"<<endl;
        else if(s=="CIAO")
            cout<<"Case "<<++t<<": "<<"ITALIAN"<<endl;
        else if(s=="ZDRAVSTVUJTE")
            cout<<"Case "<<++t<<": "<<"RUSSIAN"<<endl;
        else cout<<"Case "<<++t<<": "<<"UNKNOWN"<<endl;
    }
    return 0;
}
