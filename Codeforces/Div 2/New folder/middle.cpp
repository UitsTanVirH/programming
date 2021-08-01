#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    char ch;
    cin>>h1>>ch>>m1>>h2>>ch>>m2;
    ch=':';
    int v1=h1*60+m1;
    int v2=h2*60+m2;
    int v=(v1+v2)/2;
    int ans1=v/60;
    int ans2=v-(v/60*60);
    printf("%02d%c%02d\n", v/60, ch, v-(v/60*60));
    //cout<<v/60<<":"<<v-(v/60*60)<<endl;
    return 0;
}

