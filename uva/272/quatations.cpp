#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    string s;
    int mark=-1;
    while(getline(cin, s)){
        for(int i=0; i<s.size(); i++){
            ch=s[i];
            if(ch=='"'){
                if(mark==-1){
                    cout<<"``";
                    mark=0;
                }
                else{
                    cout<<"''";
                    mark=-1;
                }
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
