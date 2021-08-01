#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, temp;
        cin>>n;
        string s, arr=" ";
        cin>>s;
        arr+=s;
        int odd=0, even=0;
        for(int i=1; i<=n; i++){
            if(i%2==1){
                temp=arr[i]-'0';
                if(temp%2==1) ++odd;
            }
            else{
                temp=arr[i]-'0';
                if(temp%2==0) ++even;
            }
        }
        if(n==1){
            temp=arr[1]-'0';
            if(temp%2==1) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else{
            if(even>odd) cout<<2<<endl;
            else if(even==odd){
                if(even==0 && odd==0){
                    if(n%2==0) cout<<1<<endl;
                    else cout<<2<<endl;
                }
                else{
                    if(even+odd==n) cout<<2<<endl;
                    else cout<<1<<endl;
                }
            }
            else cout<<1<<endl;
        }

    }
    return 0;
}
