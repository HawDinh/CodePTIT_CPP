#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

void drawLight(int x, int y) {
    setcolor(rand() % 3 + 1);
    rectangle(x, y, x + 30, y + 30);
    floodfill(x + 1, y + 1, getcolor());
    setcolor(0);
    rectangle(x, y, x + 30, y + 30);
}

void blinkLights(int count, int speed) {
    for (int i = 0; i < count; i++) {
        int x = rand() % 610 + 10;
        int y = rand() % 360 + 10;
        drawLight(x, y);
        delay(speed);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int count = 20;
    int speed = 500;
    char response;

    while (1) {
        blinkLights(count, speed);
        outtextxy(250, 200, "Press 'q' to quit, any other key to continue");
        response = getch();
        if (response == 'q')
            break;
        cleardevice();
    }

    closegraph();
    return 0;
}

