#include <bits/stdc++.h>
using namespace std;

int main(){
    double u;
    int h, d, f;
    while(cin>>h){
        cin>>u>>d>>f;
        if(h==0) break;
        int day=1;
        double drawback=u*f/100, goal=0;
        while(1){
            goal+=u;
            if(u>0) u-=drawback;
            if(goal>h){
                cout<<"success on day "<<day<<endl;
                break;
            }
            goal-=d;
            if(goal<0){
                cout<<"failure on day "<<day<<endl;
                break;
            }
            //cout<<"goal "<<goal<<endl;
            day++;
        }
    }
    return 0;
}
