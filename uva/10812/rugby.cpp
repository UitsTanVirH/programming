#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a, b;
        cin>>a>>b;
        int x=(a+b)/2;
        int y=(a-b)/2;
        if(x+y!=a || abs(x-y)!=b || x<y ) cout<<"impossible"<<endl;
    }
    return 0;
}
