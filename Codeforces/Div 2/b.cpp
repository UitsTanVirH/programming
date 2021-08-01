#include <bits/stdc++.h>
#define GCD(x,y) __gcd((x), (y))
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n-1; i++){
        cout<<__gcd(arr[i], arr[i+1])<<" ";
    }
    //cout<<__gcd(100, 50);
    cout<<endl;
    return 0;
}
