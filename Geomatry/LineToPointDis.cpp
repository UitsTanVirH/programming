#include <bits/stdc++.h>
using namespace std;

struct point{
    double x, y;
    point(){};
    point(double a, double b){
        x=a;
        y=b;
    }
    point operator - (point b){
        point c;
        c.x=x-b.x;
        c.y=y-b.y;
        return c;
    }
    double operator * (point b){
        return x*b.x+y*b.y;
    }
    double operator ^ (point b){
        return x*b.y-y*b.x;
    }
};

double LineToPointDis(point a, point b, point c, bool isSegment){
    point ab=b-a;
    double dis=((b-a)^(c-a))/sqrt(ab.x*ab.x+ab.y*ab.y);
    if(isSegment){
        if((b-a)*(c-b)<0) return sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
        else if((b-a)*(c-a)<0) return sqrt((c.x-a.x)*(c.x-a.x)+(c.y-a.y)*(c.y-a.y));
    }
    return abs(dis);
}

int main(){
    double x, y;
    cin>>x>>y;
    point a(x,y);
    cin>>x>>y;
    point b(x,y);
    cin>>x>>y;
    point c(x,y);

    cout<<LineToPointDis(a, b, c, 0)<<endl;
    return 0;
}
