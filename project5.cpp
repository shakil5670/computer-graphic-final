#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw body
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(100, 200, 400, 300); // body
    floodfill(250, 250, YELLOW);

    // Draw windows
    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    rectangle(150, 210, 250, 250); // front window
    floodfill(200, 230, LIGHTBLUE);
    rectangle(260, 210, 350, 250); // rear window
    floodfill(300, 230, LIGHTBLUE);

    // Draw roof
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(100, 150, 400, 200); // roof
    floodfill(250, 175, BROWN);

    // Draw headlights
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    circle(120, 275, 10); // left headlight
    floodfill(120, 275, WHITE);
    circle(380, 275, 10); // right headlight
    floodfill(380, 275, WHITE);

    // Draw wheels
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    circle(150, 330, 30); // front wheel
    floodfill(150, 330, DARKGRAY);
    circle(350, 330, 30); // rear wheel
    floodfill(350, 330, DARKGRAY);

    // Draw wheel rims
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    circle(150, 330, 20); // front rim
    floodfill(150, 330, WHITE);
    circle(350, 330, 20); // rear rim
    floodfill(350, 330, WHITE);

    // Draw door handle
    setcolor(BLACK);
    line(255, 250, 255, 275); // left handle
    line(245, 250, 245, 275);
    line(255, 275, 245, 275);
    line(345, 250, 345, 275); // right handle
    line(355, 250, 355, 275);
    line(345, 275, 355, 275);

    getch();
    closegraph();
    return 0;
}
