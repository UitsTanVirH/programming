#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int b, p, f, h, c, total=0;
        cin>>b>>p>>f>>h>>c;
        b/=2;
        if(h>c){
            if(b<=p){
                total+=b*h;
                b=0;
            }
            else {
                total+=p*h;
                b-=p;
            }
            if(b<=f) total+=b*c;
            else total+=f*c;
        }
        else{
            if(b<=f){
                total+=b*c;
                b=0;
            }
            else{
                total+=f*c;
                b-=f;
            }
            if(b<=p) total+=b*h;
            else total+=p*h;
        }
        cout<<total<<endl;
    }
    return 0;
}
