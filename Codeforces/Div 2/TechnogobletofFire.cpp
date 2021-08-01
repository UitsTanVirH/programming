#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, a, b;
    cin>>n>>m>>k;
    int power[n+1], scl[n+1], cmp[n+1];
    memset(cmp, 0, sizeof cmp);
    for(int i=1; i<=n; i++)
        cin>>power[i];
    for(int i=1; i<=n; i++){
        cin>>scl[i];
        cmp[scl[i]]=max(cmp[scl[i]], power[i]);
    }
    int cnt=0;
    while(k--){
        cin>>a;
        if(power[a]<cmp[scl[a]])
            cnt++;
    }
    //for(int i=0; i<n; i++)
      //  cout<<cmp[i]<<" ";
    cout<<cnt<<endl;
    return 0;
}

