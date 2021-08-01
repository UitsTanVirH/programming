#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=1; i<n; i++){
        if(i+1==n)
            break;
        if(arr[i]==0){
            if(arr[i-1]==1 && arr[i+1]==1){
                arr[i+1]=0;
                cnt++;
            }
        }
    }
    /*for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;*/
    cout<<cnt<<endl;
    return 0;
}
