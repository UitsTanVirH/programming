#include <bits/stdc++.h>
#define mx 201
using namespace std;

int main(){
    int n, k;
    cin>>n;
    int s=n;
    int i=0;
    int arr[mx];
    while(n--){
        cin>>arr[i]>>arr[i+1];
        i+=2;
    }
    cin>>k;
    int ans=s;
    for(int i=1; i<s*2; i+=2){
        if(arr[i]>=k){
            break;
        }
        else ans--;
    }
    cout<<ans<<endl;
    return 0;
}

