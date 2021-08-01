#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int qum[n];
    qum[0]=arr[0];
    for(int i=1; i<n; i++){
        qum[i]=qum[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int b, e;
        cin>>b>>e;
        if(b==0) cout<<qum[e]<<endl;
        else cout<<qum[e]-qum[b-1]<<endl;
    }
    return 0;
}
