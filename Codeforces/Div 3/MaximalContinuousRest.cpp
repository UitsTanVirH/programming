#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr[n]=0;
    int cnt=0;
    if(arr[0]==1 && arr[n-1]==1){
        for(int i=0; i<=n; i++){
            if(arr[i]==1)
                cnt++;
            else break;
        }
        for(int i=n-1; i>=0; i--){
            if(arr[i]==1)
                cnt++;
            else break;
        }
        v.push_back(cnt);
        cnt=0;
    }
    for(int i=0; i<=n; i++){
        if(arr[i]==1)
            cnt++;
        else {
            v.push_back(cnt);
            cnt=0;
        }
    }
    //cout<<cnt<<endl;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout<<v[0]<<endl;
    return 0;
}

