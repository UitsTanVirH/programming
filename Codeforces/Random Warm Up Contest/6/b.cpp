#include <bits/stdc++.h>
using namespace std;

int main(){
    string test="CODEFORCES";
    int count=0, j=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]==test[j]){
            count++;
            j++;
        }
        if(j==test.size())
            break;
    }
    if(count==10)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}
