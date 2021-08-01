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

int main(){
    int node=1, b=1, e=7;
    segment(node, b, e);
    for(int i=1; i<=13; i++){
        cout<<tree[i]<<" ";
    }
    cout<<endl;

    return 0;
}
