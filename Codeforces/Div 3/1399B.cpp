#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        ll mini1=2000000000;
        ll mini2=2000000000;
        for(int i=0; i<n; i++){
            if(a[i]<mini1) mini1=a[i];
            if(b[i]<mini2) mini2=b[i];
        }
        ll ans=0;
        for(int i=0; i<n; i++){
            ans+=max(a[i]-mini1, b[i]-mini2);
            //cout<<"ans "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}

//1000000000
