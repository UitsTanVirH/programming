#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long int a, b, c;
        cin>>a>>b>>c;
        if(a>c)
            cout<<c<<endl;
        else if(b>=c){
            long long int d=b/c+1;
            cout<<c*d<<endl;
        }
        else {
            cout<<c<<endl;
        }
    }
}
