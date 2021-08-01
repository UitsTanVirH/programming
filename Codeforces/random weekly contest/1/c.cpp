#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    int a, ans=0;
    while(scanf("%d %d", &n, &m)!=EOF){
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<m; j++){
                cin>>a;
                if(a!=0)
                    count++;
            }
            if(count==m)
                ans++;
        }
    cout<<ans<<endl;
        ans=0;
    }
    return 0;

}
