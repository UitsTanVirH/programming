#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=n%10;
    if(a>5){
        a=10-a;
        cout<<n+a<<endl;
    }
    else cout<<n-a<<endl;
    return 0;
}
