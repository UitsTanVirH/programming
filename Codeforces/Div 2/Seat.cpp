#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    int n, count=1;
    cin>>n;
    string s;
    for(int i=0; i<n; i++){
        cin>>ch;
        if(i-1!=-1){
            s[i]=ch;
            if(s[i]!=s[i-1])
                count++;
        }
        else
            s[i]=ch;
    }
    if(n==1){
        cout<<"No"<<endl;
    }
    else{
        if(count==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
