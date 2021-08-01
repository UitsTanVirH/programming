#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll arr[5];
    for(int i=0; i<5; i++) cin>>arr[i];
    sort(arr, arr+5);
    ll minsum=0, maxsum=0;
    for(int i=1; i<5; i++) maxsum+=arr[i];
    for(int i=0; i<4; i++) minsum+=arr[i];
    cout<<minsum<<" "<<maxsum<<endl;
}
