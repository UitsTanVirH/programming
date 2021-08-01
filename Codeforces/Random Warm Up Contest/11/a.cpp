#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char c;
    map<char, int>mp;
    int count=0;
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            c=s[i];
            if(mp[c]==0)
                count++;
            mp[c]++;
        }

    }
    cout<<count<<endl;
    return 0;
}
