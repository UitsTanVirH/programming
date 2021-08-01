#include <bits/stdc++.h>
#define mod 1000000009
using namespace std;

int main(){
    string s;
    int n, sum=0, sum1=0, z;
    cin>>n;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1')
            sum++;
        else if(s[i]=='0')
            sum1++;
    }
    if(sum1<sum){
        z=sum1*2;
        cout<<s.size()-z<<endl;
    }
    else if(sum<sum1){
        z=sum*2;
        cout<<s.size()-z<<endl;
    }
    else{
        z=sum1+sum;
        cout<<s.size()-z<<endl;
    }

    return 0;
}
