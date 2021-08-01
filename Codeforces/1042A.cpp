#include <bits/stdc++.h>
using namespace std;

void got(int a[], int n){
    int min=1000000000;
    for(int i=0; i<n; i++){
        int sum1=0,sum2=0,p=n;
        while(1){
            p--;
            if(p<0) break;
            sum1+=a[p];
            while(sum2<sum1){
                p--;
                if(p<0) break;
                sum2+=a[p];
            }
        }
        if(min>abs(sum1-sum2)) min=abs(sum1-sum2);
    }


}


int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    got(a,n);
    return 0;
}
