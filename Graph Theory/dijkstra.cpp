#include <bits/stdc++.h>
#define ii pair <int,int>
using namespace std;

void dijkstra(int u){
    priority_queue<ii>pq;
    pq.push(ii(o, u));
    dist[u]=0;
    while(!pq.empty()){
        u=pq.top().ss;
        pq.pop();
        int len=graph[u].size();
        for(int i=0; i<len; i++){
            int v=graph[u][i].ff;
            int w=graph[u][i].ss;
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                pq.push(ii(-w, v));
            }
        }
    }
}

