#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main(){
    LL a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a==0 && d==0){
        if(c>0)
            cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    else if(a==d)
        cout<<"1"<<endl;
    else cout<<"0"<<endl;
    return 0;
}
