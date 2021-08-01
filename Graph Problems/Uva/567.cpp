#include <bits/stdc++.h>
#define mx 22
using namespace std;

vector<int>edge[mx];
void bfs(int source, int destination){
    int dis[mx];
    int vis[mx];
    for(int i=0; i<mx; i++)
        vis[i]=0;
    dis[source]=0;
    queue<int>q;
    q.push(source);
    vis[source]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0; i<edge[u].size(); i++){
            int v=edge[u][i];
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
                dis[v]=dis[u]+1;
            }
        }
    }
    printf("%2d to %2d: %d\n", source, destination, dis[destination]);
}

int main(){
    int a, b, t=1;
    while(scanf("%d", &a)!=EOF){
        for(int i=0; i<a; i++){
            cin>>b;
            edge[1].push_back(b);
            edge[b].push_back(1);
        }
        for(int i=2; i<=19; i++){
            cin>>a;
            for(int j=0; j<a; j++){
                cin>>b;
                edge[i].push_back(b);
                edge[b].push_back(i);
            }

        }
        int n, source, destination;
        cin>>n;
        printf("Test Set #%d\n", t);
        for(int i=0; i<n; i++){
            cin>>source>>destination;
            bfs(source, destination);
        }
        t++;
        printf("\n");
        for(int i=0; i<22; i++){
           edge[i].clear();
       }
    }
    return 0;

}
