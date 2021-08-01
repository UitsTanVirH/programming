#include <bits/stdc++.h>
#define LL long double
using namespace std;

int main(){
    LL x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    int q;
    cin>>q;
    while(q--){
        LL x, y;
        cin>>x>>y;
        LL b1=-(x1-x2);
        LL a1=y1-y2;
        LL c1=a1*x1-b1*y1;
        LL a2=b1;
        LL b2=-a1;
        LL c2=-(a2*x+b2*y);
        LL ipx1=(b1*c2-b2*c1)/(a1*b2-a2*b1);
        LL ipy1=(c1*a2-c2*a1)/(a1*b2-a2*b1);
        LL ansx, ansy;
        if(ipx1*2-x==-0)
            ansx=0;
        else ansx=ipx1*2-x;
        if(ipy1*2-y==-0)
            ansy=0;
        else ansy=ipy1*2-y;
        printf("%lf %lf\n", ansx, ansy);
    }
    return 0;
}
