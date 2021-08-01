#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c1, c2, c3;
        cin>>c1>>c2>>c3;
        int a1, a2, a3, a4, a5;
        cin>>a1>>a2>>a3>>a4>>a5;
        int mark=0;
        if(a1>c1 || a2>c2 || a3>c3){
            mark=1;
        }
        if(a1<c1)
            a4=a4-(c1-a1);
        if(a3<c3){
            if(a4>c3-a3){
                a4=a4-(c3-a3);
                a3=c3;
            }
            else{
                a3+=a4;
                a4=0;
            }
        }

        if(a4>0) mark=1;
        //cout<<a4<<endl;
        if(a2<c2)
            a5=a5-(c2-a2);
        if(a3<c3)
            a5=a5-(c3-a3);
        if(a5>0) mark=1;
        //cout<<a5<<endl;
        if(mark==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
