#include <bits/stdc++.h>
#define LL long double
using namespace std;

struct point{
    LL x, y;
    point(){};
    point(LL a, LL b){
        x=a;
        y=b;
    }
    point operator - (point b){
        point C;
        C.x=x-b.x;
        C.y=y-b.y;
        return C;
    }
    LL operator ^ (point b){
        return x*b.y-y*b.x;
    }
};

/*LL cross(point a, point b){
    return abs(a.x*b.y-b.x*a.y);
}*/

point cPoint(point a1, point a2, point b1, point b2){
    point c=b2-b1;
    point d=a1-b1;
    point e=a2-b1;
    point f=a2-a1;
    LL d1=abs(c^d);
    LL d2=abs(c^e);
    f.x*=d1/(d1+d2);
    f.y*=d1/(d1+d2);
    point g; g.x=a1.x+f.x; g.y=a1.y+f.y;
    //return g;
    printf("%0.10Lf %0.10Lf\n", g.x, g.y);
}

int main(){
    point A1, A2, B1, B2;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A1.x>>A1.y>>A2.x>>A2.y;
        cin>>B1.x>>B1.y>>B2.x>>B2.y;
        cPoint(A1, A2, B1, B2);
    }
    return 0;
}
