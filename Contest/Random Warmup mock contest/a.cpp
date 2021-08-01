#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s, left="", right="", mid;
    cin>>n;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(i==0)
            mid=s[i];
        else if(i%2==1)
            left+=s[i];
        else right+=s[i];
    }
    if(s.size()%2==1){
        if(left.size()!=0)
            reverse(left.begin(), left.end());
        cout<<left+mid+right<<endl;
    }
    else {
        if(right.size()!=0)
            reverse(right.begin(), right.end());
        cout<<right+mid+left<<endl;
    }

    return 0;
}
