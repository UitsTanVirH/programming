#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int zero=0, chrcter=0;
    while(n--){
        char ch;
        cin>>ch;
        if(ch=='z') zero++;
        chrcter++;
    }
    chrcter-=zero*4;
    int one=chrcter/3;
    for(int i=0; i<one; i++) cout<<"1"<<" ";
    for(int i=0; i<zero; i++) cout<<"0"<<" ";
    return 0;
}
