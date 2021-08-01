#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, baal;
    cin>>n;
    int arr[n];
    int neg=0, pos=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<0)
            neg++;
        else if(arr[i]>0) pos++;
    }
    if(n%2==0)
        baal=n/2;
    else baal=n/2+1;
    if(pos>=neg){
        if(pos>=baal)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }

    else{
        if(neg>=baal)
            cout<<"-1"<<endl;
        else cout<<"0"<<endl;
    }

    return 0;
}

