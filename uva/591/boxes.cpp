#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t=0;
    while(cin>>n){
        if(n==0) break;
        int arr[n], sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int avg=sum/n;
        int ans=0;
        for(int i=0; i<n; i++){
            if(arr[i]>avg) ans+=arr[i]-avg;
        }
        printf("Set #%d\n", ++t);
        printf("The minimum number of moves is %d.\n\n", ans);
    }
    return 0;
}

//Set #1
//The minimum number of moves is 5.
