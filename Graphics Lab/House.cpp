#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"Anik");

    setcolor(WHITE);
    line(145,50,360,50);//Top line
    line(145,50,190,150);//6th line
    line(360,50,400,150);//7th line
    line(190,150,400,150);
    line(100,310,400,310);//3rd line
    line(100,150,100,310);//4th line
    line(145,50,100,150);//5th line
    line(145,50,190,150);//6th line
    line(400,150,400,310);//8th line
    line(190,150,190,310);//9th line
    line(100,150,400,150);//2nd line

    //door
    line(300,310,300,210);
    line(300,210,250,210);
    line(250,210,250,310);

    /*setfillstyle(1, GREEN);
    floodfill(160,75,WHITE);

    setfillstyle(1, RED);
    floodfill(105,149,WHITE);*/
    getch();
    return 0;
}
