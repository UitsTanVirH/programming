#include <bits/stdc++.h>
using namespace std;

bool ar[101];

int main(){
    vector<int>v;
    int n, k, a;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a;
        if(ar[a]==0)
            v.push_back(i+1);
        ar[a]++;
    }
    if(v.size()>=k){
        cout<<"YES"<<endl<<v[0];
        for(int i=1; i<v.size(); i++)
            cout<<" "<<v[i];
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
