#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n, m, driver;
    cin>>n>>m;
    int arr[n+m], arr2[n+m];
    for(int i=0; i<n+m; i++)
        cin>>arr[i];
    for(int i=0; i<n+m; i++){
        cin>>arr2[i];
        if(arr2[i]==1)
            v.push_back(i);
    }

    for(int i=0; i<n+m; i++){

    }
    return 0;
}
