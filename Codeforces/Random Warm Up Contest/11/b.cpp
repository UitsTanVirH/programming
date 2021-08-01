#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int x=0, y=0, z=0;
    for(int i=1; ; i++){
        if(i*1<=a && i*2<=b && i*4<=c){
            x=i*1;
            y=i*2;
            z=i*4;
        }
        else
            break;

    }
    cout<<x+y+z<<endl;
}
