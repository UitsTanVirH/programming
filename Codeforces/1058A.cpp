#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, n, mark=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a==1)
            mark=1;
    }
    if(mark==0)
        cout<<"Easy"<<endl;
    else cout<<"Hard"<<endl;
    return 0;
}
