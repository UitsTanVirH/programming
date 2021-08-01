#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, len;
    cin>>n>>a>>b;
    int arr[n], cost=0, mark=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(n%2==0)
        len=n/2;
    else len=(n/2)+1;

    for(int i=0, j=n-1; i<len; i++, j--){
        if(arr[i]!=arr[j]){
            if(arr[i]!=2 && arr[j]!=2){
                mark=1;
                break;
            }
            else {
                if(arr[i]==1 || arr[j]==1)
                    cost+=b;
                else cost+=a;
            }
        }
        else{
            if(arr[i]==2 && arr[j]==2 && i==j){
                if(b<=a)
                    cost+=b;
                else cost+=a;
            }
            else if(arr[i]==2 && arr[j]==2 && i!=j) {
                if(b<=a)
                    cost+=2*b;
                else cost+=2*a;
            }
        }
    }
    if(mark==0)
        cout<<cost<<endl;
    else cout<<"-1"<<endl;
    return 0;
}
