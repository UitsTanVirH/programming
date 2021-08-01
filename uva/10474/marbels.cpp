#include <bits/stdc++.h>
using namespace std;

int n, a, ans=0;
void binary(int *arr){
    int b=0, e=n-1;
    while(b<=e){
        int mid=(b+e)/2;
        if(arr[mid]==a){
            if(mid!=0){
                if(arr[mid-1]==a)
                    e=mid-1;
                else{
                    ans=mid+1;
                    break;
                }
            }
            else{
                ans=mid+1;
                break;
            }
        }
        else if(arr[mid]<a)
            b=mid+1;
        else if(arr[mid]>a)
            e=mid-1;
    }
}

int main(){
    int q, t=0;
    while(cin>>n>>q){
        int arr[n];
        if(n==0 && q==0)
            break;
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+n);
        printf("CASE# %d:\n", ++t);
        while(q--){
            scanf("%d", &a);
            binary(arr);
            if(ans==0) printf("%d not found\n", a);
            else{
                printf("%d found at %d\n", a, ans);
                ans=0;
            }
        }
    }
    return 0;
}
