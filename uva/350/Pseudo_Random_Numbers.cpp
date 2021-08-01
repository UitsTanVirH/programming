#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, z, i, m, t=0;
    while(scanf("%d %d %d %d", &z, &i, &m, &l)){
        if(l==0 && z==0 && i==0 && m==0)
            return 0;
        map<int, int>mp;
        mp[l]++;
        int cnt=0, temp=l;
        while(1){
            l=(z*l+i)%m;
            mp[l]++;
            cnt++;
            if(mp[l]==2)
                break;
        }
        if(temp==l)
            printf("Case %d: %d\n", ++t, cnt);
        else
            printf("Case %d: %d\n", ++t, cnt-1);
    }
    return 0;
}
