#include <bits/stdc++.h>
#define mx 1000000
using namespace std;

int main(){
    cout<<"tanvir"<<endl;
    int n;
    cin>>n;
    int arr[n], extra[mx];
    memset(extra, 0, sizeof extra);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"tanvir"<<endl;
    sort(arr, arr+n);
    int mid=n/2;
    for(int i=0; i<mid; i++){
        for(int j=mid+1; j<n; j++)
            extra[arr[i]+arr[j]]++;
    }
    cout<<"tanvir"<<endl;
    int sum=0;
    for(int i=0; i<mx; i++){
        if(extra[i]>sum)
            sum=extra[i];
    }
    cout<<"tanvir"<<endl;
    cout<<sum<<endl;
    return 0;
}


