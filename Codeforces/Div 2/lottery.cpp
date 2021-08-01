#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, sum=0;
    cin>>a;
    for(int i=0; a!=0; i++){
        if(a-100>=0){
            a=a-100;
            sum++;
        }
        else if(a-20>=0){
            a=a-20;
            sum++;
        }
        else if(a-10>=0){
            a=a-10;
            sum++;
        }
        else if(a-5>=0){
            a=a-5;
            sum++;
        }
        else if(a-1>=0){
            a=a-1;
            sum++;
        }

    }
    cout<<sum<<endl;
    return 0;
}
