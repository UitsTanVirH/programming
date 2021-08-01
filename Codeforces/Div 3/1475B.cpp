#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2020==0 || n%2021==0){
            cout<<"YES"<<endl;
            continue;
        }
        int ld=n%10;
        n-=ld*2021;
        if(n>0 && n%2020==0) cout<<"YES"<<endl;
        //else
        else cout<<"NO"<<endl;
    }
    return 0;

}

