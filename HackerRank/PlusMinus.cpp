#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    double pos=0, neg=0, zero=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0) pos++;
        else if(arr[i]<0) neg++;
        else zero++;
    }
    printf("%0.6lf\n", pos/n);
    printf("%0.6lf\n", neg/n);
    printf("%0.6lf\n", zero/n);


}

