#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll T, b, t=0;
    string s;
    scanf("%lld", &T);
    while(T--){
        cin>>s>>b;
        ll num=0, m=0, j=0;
        if(s[0]=='-')
            j=1;

        int length=s.size();
        while(j<length){
            num=num*10+s[j]-'0';
            m=num%b;
            num=m;
            j++;
        }
        //cout<<m<<" "<<j<<" "<<length<<endl;
        if(m==0)
            printf("Case %lld: divisible\n", ++t);
        else
            printf("Case %lld: not divisible\n", ++t);
    }

    return 0;

}
