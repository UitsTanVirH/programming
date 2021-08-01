#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int h, m;
        cin>>h>>m;
        int ans=(23-h)*60+60-m;
        cout<<ans<<endl;
    }
    return 0;
}
