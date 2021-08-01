#include<bits/stdc++.h>
using namespace std;

struct point{
    int x;
    int y;

    point(){}

    point(int a, int b){
        x=a;
        y=b;
    }

    point operator - (point b){
        point c;
        c.x=x-b.x;
        c.y=y-b.y;

        return c;
    }

    int operator * (point b){
        return x*b.x+y*b.y;
    }

    int operator ^ (point b){
        return x*b.y-y*b.x;
    }

    bool operator > (point b){
        return x>b.x;
    }

    bool operator == (point b){
        return (x==b.x && y==b.y);
    }
};

int n;
point a[500];

int cross(point o, point a, point b){
    return (a-o)^(b-o);
}

bool dis(point o, point a, point b){
    int oa=sqrt((a.x-o.x)*(a.x-o.x)+(a.y-o.y)*(a.y-o.y));
    int ob=sqrt((b.x-o.x)*(b.x-o.x)+(b.y-o.y)*(b.y-o.y));
    return oa<ob;
}

vector <point> jarvisMarch(){
    point start=a[0];
    for(int i=1; i<n; i++){
        if(start>a[i]){
            start=a[i];
        }
    }

    vector <point> hull, coLinear;
    point current=start;
    hull.push_back(current);

    while(1){
        point next=a[0];
        for(int i=1; i<n; i++){
            if(current==a[i]) continue;
            int val=cross(current,next,a[i]);
            if(val>0){
                next=a[i];
                coLinear.clear();
            }
            else if(val==0){
                if(dis(current,next,a[i])){
                    coLinear.push_back(next);
                    next=a[i];
                }
                else coLinear.push_back(a[i]);
            }
        }

        for(int i=0; i<coLinear.size(); i++){
            hull.push_back(coLinear[i]);
        }

        if(next==start) break;
        hull.push_back(next);
        current=next;
    }
    return hull;
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        a[i].x=x;
        a[i].y=y;
    }

    vector <point> hull=jarvisMarch();

    cout<<"demo"<<endl;
    for(int i=0; i<hull.size(); i++){
        cout<<hull[i].x<<" "<<hull[i].y<<endl;
    }

    return 0;
}
