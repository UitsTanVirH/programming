#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b, count=0;
    cin>>a;
    for(int i=0; ; i++){
       LUCKY: a=a+1;
        b=a%10;
        count++;
        if(b==8){
            cout<<count<<endl;
            break;
        }
        else
            goto LUCKY;
    }
    return 0;
}
