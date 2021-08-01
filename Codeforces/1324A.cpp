#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int even=0,odd=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0) even++;
            else odd++;
        }
        if(even && odd) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

