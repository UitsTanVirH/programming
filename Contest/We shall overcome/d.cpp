#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        long long int sum=1;
        for(int i=0; i<n; i++){
            sum=((sum%mod)*(arr[i]%mod))%mod;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
