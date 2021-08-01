#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    priority_queue<int>pq;
    pq.push(4);
    pq.push(7);
    for(int i=0; i<100; i++){
        int u=pq.top(); pq.pop();
        v.push_back(u);
        int v=u*10+4;
        q.push(v);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}
