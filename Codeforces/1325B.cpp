#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, a, cnt=0;
        cin>>n;
        map<int, int>mp;
        for(int i=0; i<n; i++){
            cin>>a;
            ++mp[a];
            if(mp[a]<2) cnt++;
        }
        cout<<cnt<<endl;

    }
    return 0;
}

