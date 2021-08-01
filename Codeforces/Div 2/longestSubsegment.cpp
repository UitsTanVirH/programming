#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int flag, cnt=1;
    vector<int>v;
    //v.push_back(1);
    arr[n]=-1;
    flag=arr[0];
    for(int i=1; i<=n; i++){
        if(arr[i]==flag)
            cnt++;
        else {
            v.push_back(cnt);
            flag=arr[i];
            cnt=1;
        }
        //cout<<"cnt "<<cnt<<endl;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout<<v[0]<<endl;
    return 0;
}
