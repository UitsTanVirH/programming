#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, arr[3], t=0;
    cin>>T;
    while(T--){
        for(int i=0; i<3; i++)
            cin>>arr[i];
        sort(arr, arr+3);
        printf("Case %d: %d\n", ++t, arr[1]);
    }
    return 0;
}
