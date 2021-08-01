#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool flag=1;
    while(cin>>n){
        if(n==42) flag=0;
        if(flag) cout<<n<<endl;
    }
    return 0;
}
