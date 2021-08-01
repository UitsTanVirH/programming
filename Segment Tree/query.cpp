#include <bits/stdc++.h>
using namespace std;

int arr[8]={0, 1, 2, 3, 4, 5, 6, 7};
int tree[21];

void segment(int node, int b, int e){
    if(b==e){
        tree[node]=arr[b];
        return;
    }
    int mid=(b+e)/2;
    int left=node*2;
    int right=node*2+1;
    segment(left, b, mid);
    segment(right, mid+1, e);
    tree[node]=tree[left]+tree[right];
}

int query(int node, int b, int e, int i, int j){
    if(b>=i && e<=j){
        return tree[node];
    }
    if(b>j || e<i)
        return 0;
    int mid=(b+e)/2;
    int left=node*2;
    int right=node*2+1;
    int p=query(left, b, mid, i, j);
    int q=query(right, mid+1, e, i, j);
    return p+q;
}

void update(int node, int b, int e, int i, int newvalue){
    if(i>e || i<b)
        return;
    if(b>=i && e<=i){
        tree[node]=newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main(){
    segment(1, 1, 7);
    cout<<query(1, 1, 7, 2, 6)<<endl;
    update(1, 1, 7, 1, 3);
    cout<<query(1, 1, 7, 1, 6)<<endl;

    return 0;
}
