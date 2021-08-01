#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main(){
    int n;
    cin>>n;
    LL arr[n], cumsum[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    /*for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;*/
    int m;
    cumsum[0]=arr[0];
    for(int i=1; i<n; i++){
        cumsum[i]=cumsum[i-1]+arr[i];
        //cout<<cumsum[i]<<" ";
    }
    //cout<<endl;
    cin>>m;
    while(m--){
        int a;
        cin>>a;
        LL ans=cumsum[n-a]-arr[n-a];
        LL ans2=cumsum[n-1]-cumsum[n-a];
        cout<<ans+ans2<<endl;
    }
    return 0;
}
