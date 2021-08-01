#include <bits/stdc++.h>
#define mx 1000000007
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int a=mx, b=mx, c=mx, posa=-1, posb=-1, posc=-1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<a){
            a=arr[i];
            posa=i+1;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>a && arr[i]<b){
            b=arr[i];
            posb=i+1;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>b && arr[i]<c){
            c=arr[i];
            posc=i+1;
        }
    }
    if(posa==-1 || posb==-1 || posc==-1) cout<<"-1 -1 -1"<<endl;
    else cout<<posa<<" "<<posb<<" "<<posc<<endl;
    return 0;
}
