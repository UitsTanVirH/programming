#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n, sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=i;
        if(sum>=n){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
