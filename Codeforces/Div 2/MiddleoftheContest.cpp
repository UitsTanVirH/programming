#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    cin>>h1>>m1>>h2>>m2;
    int v1=h1*60+m1;
    int v2=h2*60+m2;
    int v=(v1+v2)/2;
    int ans1=v/60;
    int ans2=v-(v/60*60);
    if(ans1<10 )
        printf("0%d:", v/60);
    else
        printf("%d:", v/60);
    if(ans2<10)
        printf("0%d\n",ans2);
    else
        printf("%d\n",ans2);
    //printf("%d:%d\n", v/60, v-(v/60*60));
    //cout<<v/60<<":"<<v-(v/60*60)<<endl;
    return 0;
}
