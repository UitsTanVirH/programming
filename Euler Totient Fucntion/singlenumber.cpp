#include <bits/stdc++.h>
using namespace std;

int phi(int n){
    int ret=n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            //i is a prime number
            while(n%i==0){
                n/=i;
            }
            ret-=ret/i;
        }
    }
    if(n>1){
        //There can be only one prime greater than sqrt n
        ret-=ret/n;
    }
    return ret;
}

int main(){
    int n;
    scanf("%d", &n);
    cout<<phi(n)<<endl;
    return 0;
}
