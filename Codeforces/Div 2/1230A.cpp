#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[7];
    for(int i=1; i<=4; i++)
        cin>>arr[i];
    sort(arr+1, arr+5);
    if(arr[1]+arr[2]+arr[3]==arr[4])
        cout<<"YES"<<endl;
    else if(arr[1]+arr[4]==arr[2]+arr[3])
        cout<<"YES"<<endl;
    else if(arr[1]+arr[3]==arr[2]+arr[4])
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
