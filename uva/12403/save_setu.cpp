#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, n, sum=0;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        if(s=="donate"){
            cin>>n;
            sum+=n;
        }
        else if(s=="report") cout<<sum<<endl;
    }
    return 0;
}
