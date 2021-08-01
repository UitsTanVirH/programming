#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        if(a==1)
            cout<<"1"<<endl;
        else cout<<a+(a/2-1)<<endl;
    }
    return 0;
}
