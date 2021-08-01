#include <bits/stdc++.h>
using namespace std;

int main(){
    string m="http://www.lightoj.com/";
    stack<string>f;
    stack<string>b;
    int t, c=1;
    string k, s;
    cin>>t;
    while(t--){
        b.push(m);
        cout<<"Case "<<c<<":"<<endl;
        while(1){
            cin>>k;
            if(k=="VISIT"){
                cin>>s;
                b.push(s);
                while(!f.empty()) f.pop();
                cout<<b.top()<<endl;
            }
            else if(k=="BACK"){
                f.push(b.top());
                b.pop();
                if(!b.empty()) cout<<b.top()<<endl;
                else{
                    cout<<"Ignored"<<endl;
                    b.push(f.top());
                    f.pop();
                }
            }
            else if(k=="FORWARD"){
                if(!f.empty()){
                    b.push(f.top());
                    cout<<f.top()<<endl;
                    f.pop();
                }
                else cout<<"Ignored"<<endl;
            }
            else if(k=="QUIT") break;
        }
        c++;
        while(!b.empty()) b.pop();
        while(!f.empty()) f.pop();
    }

    return 0;
}
