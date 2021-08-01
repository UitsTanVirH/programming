#include <bits/stdc++.h>
#define mx 107
using namespace std;

vector<int>edge[mx];
int main(){
    int T;
    cin>>T;
    while(T--){
        int n, r, x, y;
        cin>>n>>r;
        for(int i=0; i<r; i++){
            cin>>x>>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        int source, des;
        cin>>source>>des;

    }
    return 0;
}
