#include <bits/stdc++.h>
using namespace std;

int main(){
    double h, u, d, f;
    while(cin>>h){
        cin>>u>>d>>f;
        if(h==0) break;
        int up=0, down=0;
        double goal=0, drawback=u*(f/100);
        while(1){
            goal+=u;
            if(u>0)
                u-=drawback;
            up++;
            if(goal>h){
                cout<<"success on day "<<up<<endl;
                break;
            }
            goal-=d;
            down++;
            if(goal<0){
                cout<<"failure on day "<<down<<endl;
                break;
            }
        }
    }
    return 0;
}


