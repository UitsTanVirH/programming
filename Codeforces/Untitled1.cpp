#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, s, p, sheet_need=0;
    cin>>k>>n>>s>>p;
    if(s>k*n){
        cout<<k<<endl;
    }
    else{
        for(int i=1; ;i++){
            if(i*s>=n){
                sheet_need=i;
                break;
            }
        }
        //cout<<sheet_need<<endl;
        int x=sheet_need*k;
        //cout<<x<<endl;
        for(int i=1; ; i++){
            if(i*p>=x){
                cout<<i<<endl;
                break;
            }
        }

    }
    return 0;

}
