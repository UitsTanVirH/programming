#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    vector<int>v;
    map<int, int>mp;
    while(scanf("%d", &a)!=EOF){
        if(mp[a]==0){
            v.push_back(a);
        }
        mp[a]++;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }

    return 0;

}
