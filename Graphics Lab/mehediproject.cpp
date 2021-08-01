#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd = DETECT,gm;
    initgraph(&gd, &gm,"");
    int x = getmaxx();

    setcolor(BROWN);
    line(0,400,x,400);//road

    for(int i=0; i<x; i++){

    setcolor(BLUE);
    line(0,400,x,400);//road
    setcolor(YELLOW);
    line(100+i,270,300+i,270);//garir chad
    line(100+i,270,50+i,330);//pichoner side
    line(300+i,270,370+i,330);//samner side
    line(50+i,330,50+i,370);//pichoner side 2
    line(370+i,330,370+i,370);//samner side 2
    line(50+i,370,75+i,370);//pichoner tire porjonto
    line(125+i,370,275+i,370);//distance between two tires
    line(325+i,370,370+i,370);//samner tire ar porer part
    circle(100+i,370,25);//first tire
    circle(300+i,370,25);//second tire

    setcolor(GREEN);
    circle(100+i,70,40);

    delay(15);
    cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
