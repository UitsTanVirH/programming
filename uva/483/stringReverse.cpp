#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        string test="";
        int sz=s.size();
        for(int i=0; i<sz; i++){
            if(s[i]==' '){
                reverse(test.begin(), test.end());
                cout<<test<<" ";
                test="";
            }
            else test+=s[i];
        }
        reverse(test.begin(), test.end());
        cout<<test<<endl;
    }
    return 0;
}
