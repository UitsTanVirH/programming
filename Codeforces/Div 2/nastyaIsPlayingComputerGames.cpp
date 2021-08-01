#include <bits/stdc++.h>
#define mx 5007
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int arr[mx];
    arr[1]=2;
    for(int i=2; i<=5000; i++){
        arr[i]=i+(i-1)+i+1;
    }
    /*for(int i=2; i<50; i++)
        cout<<arr[i]<<" ";
    cout<<endl;*/
    if(k==1 || k==n)
        cout<<arr[n]<<endl;
    else {
        int ans2=max(n-k+1, k);
        int ans3=n-ans2;
        int ans=min(ans2, ans3)*2;
        cout<<"ans= "<<ans<<" ans2= "<<ans2<<" ans3= "<<ans3<<endl;
        cout<<ans+arr[ans2]+arr[ans3]<<endl;
    }
    return 0;
}


