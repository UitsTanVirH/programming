#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        vector<int>v;
        int n;
        cin>>n;
        int temp=n/2;
        if(n%2==0) {
            for(int i=0; i<temp; i++) cout<<"1";
            cout<<endl;
        }
        else{
            cout<<"7";
            for(int i=0; i<temp-1; i++) cout<<"1";
            cout<<endl;
        }
    }
    return 0;
}
