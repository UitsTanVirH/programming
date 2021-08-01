#include <bits/stdc++.h>
#define PI acos(-1)
using namespace std;

double Rad(double a){
    return a*PI/180;
}

int main(){
    double l, w, h, angle, ans;
    while(cin>>l>>w>>h>>angle){
        double lombo=l*tan(Rad(angle));
        if(lombo>h)
            ans=0.5*h*h*l*w/lombo;
        else{
            double tri=0.5*l*lombo*w;
            ans=(l*w*h)-tri;
        }
        printf("%0.3lf mL\n", ans);
    }
    return 0;
}
