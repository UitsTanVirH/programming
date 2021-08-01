#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    int T, t=0;
    cin>>T;
    while(T--){
        LL n, rem, rev=0;
        cin>>n;
        //cout<<n<<endl;
        if(n<10){
            printf("Case %d: ", ++t);
            cout<<n<<endl;
        }
        else{
            LL n2=n/10;
            rem=n%10;
            n=n/10;
            stringstream ss;
            ss<<n;
            string str=ss.str();
            reverse(str.begin(), str.end());
            printf("Case %d: ", ++t);
            cout<<n2<<rem<<str<<endl;
        }
    }
    return 0;
}
