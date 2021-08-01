#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    int x_radius,y_radius,i,j;
    cout << "Enter the values of radius of ellipse for x and y coordinates : " << endl;
    cout << "Enter x coordinate value : ";
    cin >> x_radius;
    cout << "Enter y coordinate value : ";
    cin >> y_radius;
    int point = x_radius / y_radius;

    //for(i=0; i<4; i++){

    i=0,j=0;
    while(i<x_radius || j<y_radius){
        setcolor(BROWN);
    ellipse(200,200,0,360,x_radius,y_radius);
        circle(200+x_radius-i,200-j,20);
        i = i + point;
        j = j + 1;
        delay(50);
        cleardevice();
    }

    //}

    getch();
    closegraph();
    return 0;
}
