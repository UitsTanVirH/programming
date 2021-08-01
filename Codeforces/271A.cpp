#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt=0;
    cin>>n;
    n+=1;
    int s=n;
    for(int i=0; ; i++){
        map<int, int>mp;
        for(int i=0; i<4; i++){
            mp[n%10]++;
            if(mp[n%10]==1)
                cnt++;
            n/=10;
        }
        if(cnt==4){
            cout<<s<<endl;
            break;
        }
        else {
            s++;
            cnt=0;
            n=s;
        }
    }
    return 0;
}
