#include <bits/stdc++.h>
using namespace std;

int main(){
    long int l, r, mark=0;
    cin>>l>>r;
    for(int i=l; i<=r; i++){
        if(i%2==0){
            mark=1;
            break;
        }
    }
    if(mark==1)
        cout<<2<<endl;
    else cout<<l<<endl;
    return 0;
}
