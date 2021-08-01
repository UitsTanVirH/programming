#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int fc=0, lc=n-1, arr2[n];
        for(int i=0; i<n; i++){
            if(i%2==0){
                arr2[i]=arr[fc];
                ++fc;
            }
            else{
                arr2[i]=arr[lc];
                --lc;
            }
        }
        for(int i=0; i<n; i++)
            cout<<arr2[i]<<" ";
        cout<<endl;

    }
    return 0;
}
