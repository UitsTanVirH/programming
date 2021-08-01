#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int money=0, count=1;
    long long int k, n, w;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        money+=k*count;
        count++;
    }
    if(money<=n) cout<<"0"<<endl;
    else cout<<money-n<<endl;

    return 0;

}

