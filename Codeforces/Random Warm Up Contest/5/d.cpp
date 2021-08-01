#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    int count=0, a;
    long long int n, t;
    scanf("%lld %lld", &n, &t);
    while(n--){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(v[i]<=t){
            count++;
            t=t-v[i];
        }
    }
    cout<<count<<endl;
    return 0;

}

