#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(!(n & 1)) cout<<"EVEN"<<endl;
        else cout<<"ODD"<<endl;
    }

    return 0;
}

