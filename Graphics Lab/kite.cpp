#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd,gm;
    detectgraph(&gd , &gm);
    initgraph(&gd , &gm,"ANIK");


    line(200,200,300,100);
    line(300,100,400,200);
    line(300,300,200,200);
    line(400,200,300,300);
    line(300,100,300,300);
    arc(300,300,45,135,140);


    //setfillstyle(SOLID_FILL,RED);
    setfillstyle(1,GREEN),
    floodfill(301,105,WHITE);
    setfillstyle(1,RED);
    floodfill(299,105,WHITE);
    setfillstyle(1,GREEN);
    floodfill(299,275,WHITE);
    setfillstyle(1,RED);
    floodfill(301,275,WHITE);


    line(300,300,250,350);
    line(250,350,350,350);
    line(300,300,350,350);

    setfillstyle(1,LIGHTGRAY);
    floodfill(300,310,WHITE);
    getch();
}

