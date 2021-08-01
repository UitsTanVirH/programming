#include <bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        double d, l, D, L;
        cin>>D>>L;
        l=L/2; d=D/2;
        double ans=sqrt(l*l-d*d);
        printf("%0.3lf\n", PI*l*ans);
    }
    return 0;
}
