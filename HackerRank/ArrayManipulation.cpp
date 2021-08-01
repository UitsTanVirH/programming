#include <bits/stdc++.h>
#define ll long long
#define mx 10000007
using namespace std;

struct info {
    ll prop, sum;
} tree[mx * 3];
void update(int node, int b, int e, int i, int j, ll x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;

}

int query(int node, int b, int e, int i, int j, int carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    int p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    int p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}

int main(){
    int n, m, a, b, k;
    cin>>n>>m;
    while(m--){
        cin>>a>>b>>k;
        update(1, 1, n, a, b, k);
        v.push_back(query(1, 1, n, a, b, 0));
    }

    for(int i=0; i<n*3; i++){
        cout<<tree[i].prop<<" ";
    }
    cout<<endl;

    int cnt=n, ans=-1;
    for(int i=cnt; i<n*3; i++){
        if(tree[i].sum>ans) ans=tree[i].sum;
    }
    cout<<ans<<endl;
}
