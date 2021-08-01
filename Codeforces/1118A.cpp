#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        LL n, a, b, sum1, sum2;
        cin>>n>>a>>b;
        sum1=(n/2)*b+(n%2)*a;
        sum2=n*a;
        cout<<min(sum1, sum2)<<endl;
    }
    return 0;
}
