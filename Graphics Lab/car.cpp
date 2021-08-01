#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm,NULL);

    line(0,300,640,300);
    setcolor(WHITE);
    circle(100,285,15);
    circle(200,285,15);
    circle(100,285,5);
    circle(200,285,5);

    line(65,285,85,285);
    line(115,285,185,285);
    line(215,285,235,285);
    line(65,285,65,260);
    line(235,285,235,260);
    line(65,260,100,255);
    line(235,260,200,255);
    line(100,255,115,235);
    line(200,255,185,235);
    line(115,235,185,235);
    getch();
}

