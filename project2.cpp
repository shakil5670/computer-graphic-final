#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the house
    setcolor(YELLOW); // Set color to yellow
    rectangle(200, 300, 400, 500); // Main body
    setcolor(BLUE); // Set color to blue
    rectangle(250, 350, 350, 450); // Door
    setcolor(WHITE); // Set color to white
    rectangle(300, 400, 320, 450); // Door knob
    setcolor(RED); // Set color to red
    line(200, 300, 300, 200);       // Left roof
    line(300, 200, 400, 300);       // Right roof

    // Draw windows
    setcolor(GREEN); // Set color to green
    rectangle(260, 360, 290, 390); // Left window
    rectangle(310, 360, 340, 390); // Right window
    setcolor(BLACK); // Set color to black
    line(275, 360, 275, 390);      // Left window divider
    line(260, 375, 290, 375);      // Upper window divider
    line(325, 360, 325, 390);      // Right window divider
    line(310, 375, 340, 375);      // Upper window divider

    getch();
    closegraph();
    return 0;
}
