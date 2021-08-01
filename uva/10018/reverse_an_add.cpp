#include <bits/stdc++.h>
using namespace std;

long reverse(long x){
    long sum=0;
    while(x!=0){
        sum*=10;
        sum+=x%10;
        x/=10;
    }
    return sum;

}

int main(){
    long int T, rev;
    scanf("%ld", &T);
    while(T--){
        long int p;
        scanf("%ld", &p);
        rev=reverse(p);
        int cnt=0;
        while(rev!=p){
            p+=rev;
            rev=reverse(p);
            cnt++;
        }
        cout<<cnt<<" "<<rev<<endl;
    }
    return 0;
}
