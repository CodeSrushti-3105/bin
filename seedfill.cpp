#include <iostream>
#include <graphics.h>  

using namespace std;

int getPixelColor(int x, int y)
{
    return getpixel(x, y);
}
void setPixelColor(int x, int y, int color)
{
    putpixel(x, y, color);
}
void boundaryFill(int x, int y, int fillColor, int boundaryColor)
{
    int currentColor = getPixelColor(x, y);
    if (currentColor != boundaryColor && currentColor != fillColor)
    {
       setPixelColor(x, y, fillColor);
       boundaryFill(x + 1, y, fillColor, boundaryColor);
       boundaryFill(x - 1, y, fillColor, boundaryColor);
       boundaryFill(x, y + 1, fillColor, boundaryColor);
       boundaryFill(x, y - 1, fillColor, boundaryColor);
       
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    rectangle(100, 100, 200, 200);
    int boundaryColor = WHITE;
    int fillColor = GREEN;
    boundaryFill(110, 110, fillColor, boundaryColor);  
    getch();
    closegraph();
    return 0;
}