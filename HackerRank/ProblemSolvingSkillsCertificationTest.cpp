#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int sz=s.size();
        int cmp=s[0], cmp2;
        int mark=0;
        for(int i=1; i<sz; i++){
            //if(s[i]==' ') continue;
            cmp2=s[i];
            if(cmp2<cmp) mark=1;
            else if(cmp2>cmp) cmp=s[i];
        }
        if(mark) cout<< "YES"<<endl;
        else cout<< "NO"<<endl;
        //cout<<s<<endl;
    }

    return 0;
}
