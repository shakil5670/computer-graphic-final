#include <iostream>
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    initwindow(1000,1000,"Bird");

     line (400,150,300,150);



  // circle
  setcolor(RED);
    setfillstyle(1, YELLOW);
    circle(200,160,100);
    floodfill(150,150,RED);
    floodfill(150,110, RED);
    setfillstyle(1, RED);
    circle(250,110,10);
    floodfill(250,110, RED);


    // Draw filled triangle
    int trianglePoints[] = {300, 100, 250, 200, 350, 200, 300, 100};
    setfillstyle(SOLID_FILL, RED);
    fillpoly(4, trianglePoints);

    getch();
    closegraph();
    return 0;
}
