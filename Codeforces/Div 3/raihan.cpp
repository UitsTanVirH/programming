#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);


    if(n==1) cout << "0" << endl;
    else if(n>2){
            int x=abs(arr[0]-arr[1]);
            for(int i=1;i<n-1;i++){
                if(x==0) x=abs(arr[i]-arr[i+1]);
                else if(x!=0 && abs(arr[i]-arr[i+1])!=0 && abs(arr[i]-arr[i+1])!=x){
                        cout << "-1" << endl;
                        return 0;
                }
            }
            cout << x << endl;
    }
    else{
       int y=(arr[0]+arr[1])/2;
       if(abs(y-arr[0])==abs(y-arr[1])) cout << abs(y-arr[0]) << endl;
       else cout << "-1" << endl;
    }

return 0;
}
