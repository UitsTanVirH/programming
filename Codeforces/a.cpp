#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        ll valid=(n*(n-1)/2)-1;
        ll i=1;
        ll cnt=0;
        //cout<<" valid = "<<valid<<endl;
        while(i!=n){
            if(arr[i]<arr[i-1]) cnt+=i;
            ++i;
        }
        //cout<<"valid = "<<valid<<endl;
        //cout<<"cnt = "<<cnt<<endl;
        if(valid>=cnt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
