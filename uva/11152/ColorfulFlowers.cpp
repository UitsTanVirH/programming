#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    while(cin>>a>>b>>c){
        double roses, violets, sunflowers, r, R, s;
        s=(a+b+c)/2.0;
        violets=sqrt(s*(s-a)*(s-b)*(s-c));
        r=(violets*2)/(a+b+c);
        roses=r*r*acos(-1);
        R=a*b*c/(4.0*violets);
        sunflowers=R*R*acos(-1)-violets;
        violets=violets-roses;
        printf("%0.4lf %0.4lf %0.4lf\n", sunflowers, violets, roses);
    }
    return 0;
}
