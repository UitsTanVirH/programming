#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, k, sum=0;
        string s="";
        char ch='a';
        cin>>n>>k;
        for(int i=0; i<n; i++){
            if(sum==k){
                sum=0;
                ch='a';
            }
            s+=ch;
            ch+=1;
            sum++;
        }
        cout<<s<<endl;
    }
}

