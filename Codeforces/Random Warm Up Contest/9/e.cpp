#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    while(scanf("%d", &n)!=EOF){
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cin>>m;

        sort(arr, arr+n);
        int price1, price2;
        int start=0, end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==m){
                price1=arr[start];
                price2=arr[end];
                start++;
                end--;
            }
            else if(arr[start]+arr[end]<m)
                start++;
            else if(arr[start]+arr[end]>m)
                end--;

        }

        cout<<"Peter should buy books whose prices are "<<price1<<" and "<<price2<<"."<<endl<<endl;

    }


    return 0;
}
