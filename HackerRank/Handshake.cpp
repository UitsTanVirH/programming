#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0;
        while(n!=0){
            sum+=n-1;
            n-=1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
