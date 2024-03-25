#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw flower stem
    setcolor(GREEN);
    line(300, 400, 300, 300);

    // Draw flower petals
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(300, 250, 50); // center
    floodfill(300, 250, RED);
    circle(250, 250, 50); // left
    floodfill(250, 250, RED);
    circle(350, 250, 50); // right
    floodfill(350, 250, RED);
    circle(300, 200, 50); // top
    floodfill(300, 200, RED);
    circle(300, 300, 50); // bottom
    floodfill(300, 300, RED);

    // Draw flower center
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(300, 250, 20); // center
    floodfill(300, 250, YELLOW);

    getch();
    closegraph();
    return 0;
}
