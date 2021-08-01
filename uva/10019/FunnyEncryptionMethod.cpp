#include <bits/stdc++.h>
using namespace std;

int bin[32], temp;
int deciToBinary(int n){
    int b=0, i=0;
    temp=n;
    memset(bin, 0, sizeof bin);
    while(temp>0){
        bin[i]=temp%2;
        temp/=2;
        i++;
    }
    for(int j=0; j<i; j++){
        if(bin[j]==1) b++;
    }
    return b;
}

int hexaToDeci(int n){
    int t=1;
    temp=0;
    while(n){
        temp+=(n%10)*t;
        t*=16;
        n/=10;
    }
    return temp;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int ans1=deciToBinary(n);
        n=hexaToDeci(n);
        int ans2=deciToBinary(n);
        printf("%d %d\n", ans1, ans2);
    }
    return 0;
}
