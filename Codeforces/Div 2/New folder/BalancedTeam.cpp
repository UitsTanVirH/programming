#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    vector<LL>v;
    int n;
    cin>>n;
    LL arr[n+1];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr[n]=10000000000;
    sort(arr, arr+n);
    int sum=1, j=0;
    for(int i=1; i<=n; i++){
        if(arr[i]-arr[j]<=5){
            sum++;
        }
        else{
            v.push_back(sum);
            sum=0;
        }
        j++;
        //cout<<sum<<endl;
    }
    int sz=v.size();
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout<<v[0]<<endl;
    return 0;
}


