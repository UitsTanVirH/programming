#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, rev, sum=0;
    cin>>a;
    while(a!=0){
        rev=sum*10+a%10;
        a=a/10;
        sum=rev;
    }
    cout<<rev<<endl;
    return 0;
}
