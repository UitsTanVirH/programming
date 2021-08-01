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
    double norm(){
		return x*x+y*y;
	}
};

double cross(point a, point b){
    return a.x*b.y-b.x*a.y;
}

int ccw(point a, point b, point c){
    point d=b-a, e=c-a;
    if((d^e)>0) return +1;
    if(cross(d, e)<0) return -1;
    if(d*e<0) return +2;
    if(d.norm()<e.norm()) return -2;
    return 0;
}
int main(){
    int q;
    point p1, p2, p3;
    cin>>p1.x>>p1.y>>p2.x>>p2.y;
    cin>>q;
    while(q--){
        cin>>p3.x>>p3.y;
        switch(ccw(p1, p2, p3)){
            case +1: cout<<"COUNTER_CLOCKWISE"<<endl; break;
            case -1: cout<<"CLOCKWISE"<<endl; break;
            case +2: cout<<"ONLINE_BACK"<<endl; break;
            case -2: cout<<"ONLINE_FRONT"<<endl; break;
            case  0: cout<<"ON_SEGMENT"<<endl; break;
        }
    }
    return 0;
}
