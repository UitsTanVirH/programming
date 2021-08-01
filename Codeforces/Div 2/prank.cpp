#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n, cnt=0;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr[n]=0;
    for(int i=1; i<=n; i++){
        if(arr[i]-1==arr[i-1]){
            cnt++;
        }
        else{
            if(arr[i]==0){
                v.push_back(cnt);
                cnt=0;
            }
            else {
                v.push_back(cnt-1);
                cnt=0;
            }
        }
    }
    int z=v.size();
    sort(v.begin(), v.end());
    cout<<v[z-1]<<endl;
    return 0;
}
