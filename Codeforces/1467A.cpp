#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int num=8;
        cout<<9;
        for(int i=1; i<n; i++){
            cout<<num;
            num++;
            if(num==10) num=0;
        }
        cout<<endl;
    }
    return 0;
}

