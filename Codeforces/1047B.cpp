#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n, a, b;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(a+b);
    }
    sort(v.begin(), v.end());
    int sz=v.size();
    cout<<v[sz-1]<<endl;
    return 0;
}
