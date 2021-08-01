//Moving Object - Project Car
#include <bits/stdc++.h>
#include <graphics.h>
#include <windows.h>
using namespace std;

int main(){
    DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight=GetSystemMetrics(SM_CXSCREEN);
    initwindow(screenWidth, screenHeight);

    cout<<screenHeight<<endl;
    cout<<screenWidth<<endl;
    /*int driver,mode;
    driver=DETECT;
    mode=0;
    initgraph(&driver,&mode,"c:\\tc\\bgi");*/
    int rectposX=100, cir1posX=200, cir2posX=500, speed=15;
    while(1){
        setcolor(RED);
        for(int i=0; i<=19; i++) rectangle(rectposX-i, 300-i, rectposX+500+i, 511+i);

        setcolor(BLUE);
        for(int i=50; i<=69; i++){
            circle(cir1posX, 600, i);
            circle(cir2posX, 600, i);
        }
        setcolor(GREEN);
        for(int i=0; i<=19; i++) line(0, 670+i, screenWidth, 670+i);

        if(GetAsyncKeyState(VK_RIGHT)){
            rectposX+=speed;
            cir1posX+=speed;
            cir2posX+=speed;
        }

        else if(GetAsyncKeyState(VK_LEFT)){
            rectposX-=speed;
            cir1posX-=speed;
            cir2posX-=speed;
        }
        delay(10);
        cleardevice();
    }
}
