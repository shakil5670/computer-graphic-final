#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw Doraemon's body
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    ellipse(300, 300, 0, 360, 100, 100); // body
    floodfill(300, 300, BLUE);

    // Draw Doraemon's face
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    ellipse(300, 250, 0, 360, 60, 50); // face
    floodfill(300, 250, WHITE);

    // Draw Doraemon's eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(270, 230, 10); // left eye
    floodfill(270, 230, BLACK);
    circle(330, 230, 10); // right eye
    floodfill(330, 230, BLACK);

    // Draw Doraemon's nose
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(300, 250, 5); // nose
    floodfill(300, 250, RED);

    // Draw Doraemon's mouth
    setcolor(BLACK);
    line(285, 265, 315, 265); // mouth

    // Draw Doraemon's whiskers
    setcolor(BLACK);
    line(270, 240, 240, 230); // left whisker
    line(270, 240, 240, 250);
    line(330, 240, 360, 230); // right whisker
    line(330, 240, 360, 250);

    // Draw Doraemon's bell
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(300, 335, 10); // bell
    floodfill(300, 335, YELLOW);

    getch();
    closegraph();
    return 0;
}
