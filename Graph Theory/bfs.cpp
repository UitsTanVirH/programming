#include <bits/stdc++.h>
#define MAX 10000
#define mx 100
using namespace std;

vector<int>graph[MAX];
int dis[mx];
bool vis[mx];
void bfs(int source){
    dis[source]=0;
    queue<int>q;
    q.push(source);
    vis[source]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0; i<graph[u].size(); i++){
            int v=graph[u][i];
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
                dis[v]=dis[u]+1;
            }
        }
    }
}
int main(){
    int N, E;
    cin>>N>>E;
    for(int i=0; i<E; i++){
        int x, y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int source, des;
    cin>>source>>des;
    bfs(source);
    cout<<dis[des]<<endl;
    return 0;
}
