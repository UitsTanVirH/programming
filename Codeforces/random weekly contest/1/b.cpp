#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[1003];
    int n, count=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<"MOJa"<<endl;
    }
    for(int i=0; i<n; i+=3){
        if(arr[i]==1)
            if(arr[i+1]==0){
                if(arr[i+2]==1)
                    count+=3;
                else
                    count+=2;
            }
            else{
                if(arr[i+2]==1)
                    count+=3;
                else
                    count+=2;

            }
            cout<<count<<endl;

    }
    cout<<count<<endl;
    return 0;
}
