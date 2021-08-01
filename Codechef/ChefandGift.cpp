#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, k, num, even=0;
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>num;
            if(num%2==0) even++;
        }
        if(even<k || (k==0 && even==n)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
