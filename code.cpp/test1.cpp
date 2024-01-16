#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int x = 10;
int ban_kinh = 8;
int so_luong = 20;
int khoang_cach = 20;
int y =0;
int X = x;
int Y = y;

int Random(int min,int max){
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

// Ham ve den 
void VeDen(int color,int y) {
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    circle(x, y, ban_kinh);
    floodfill(x, y, color);
}

void VeTrangSao(){
	for (int i=0; i<=999; i++) {
		putpixel (Random(1,720),Random(1,600),WHITE);
	}
	setcolor(14);
	circle (300,200,80);
	setfillstyle(1,15);
	floodfill(300,200,14);
}

void VeDen1(){
    int soluong = 15;
    int x1 = 10;  
    y = 50;
    for(int i = 0; i < soluong; i++){
        int tmp = y + Random(20, 50);
        setcolor(15);
        line(x1, 50, x1, tmp);
        int color1 = Random(1, 15);
        setfillstyle(SOLID_FILL, color1);
        setcolor(color1);
        pieslice(x1, tmp + 10, 90, 90, 12);
        floodfill(x1, tmp + 10, color1);
        x1 += 50;  
    }
}

void VeDen2(int screen_height,int tmp) {
    
    for (int i = 0; i < so_luong; i++) {
        int color = Random(1,15);
        // Ve den
        y = screen_height / 6 + static_cast<int>(ban_kinh * sin(x * 3.14 * 2 / (ban_kinh * 5)));
        VeDen(color,y+tmp);
        // Ve day
        if (i > 0) {
            setcolor(WHITE);
            line(X, Y+tmp, x, y+tmp);
        }
        X = x;
        Y = y;
        x += 2 * ban_kinh + khoang_cach;
    }
}

int main() {
    initwindow(720, 600);
    int screen_width = getmaxx();
    int screen_height = getmaxy();
    
    VeTrangSao();
    
    while (!kbhit()) {
        cleardevice();
		x = ban_kinh + 10;
		setcolor(15);
		line(0,50,getmaxx(),50);
		VeDen1();
		VeDen2(screen_height,370);
        delay(200);
    }
    closegraph();
    return 0;
}

