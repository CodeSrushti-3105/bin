#include <graphics.h>
#include <iostream>
#include <cmath>  


void ddaLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = std::max(abs(dx), abs(dy));
    float xIncrement = dx / (float)steps;
    float yIncrement = dy / (float)steps;
    
    float x = x1;
    float y = y1;
    putpixel(round(x), round(y), WHITE);
    
    for (int i = 0; i < steps; i++) {
        x += xIncrement;
        y += yIncrement;
        putpixel(round(x), round(y), WHITE);
    }
}


void bresenhamCircle(int xc, int yc, int r) {
    int x = 0;
    int y = r;
    int d = 3 - 2 * r;
    
    auto drawCirclePoints = [&](int x, int y) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
    };
    
    drawCirclePoints(x, y);
    
    while (x < y) {
        x++;
        if (d > 0) {
            y--;
            d = d + 4 * (x - y) + 10;
        } else {
            d = d + 4 * x + 6;
        }
        drawCirclePoints(x, y);
    }
}

int main() {
    
    int gd = DETECT, gm;
    
    initgraph(&gd, &gm, nullptr);

  
    cleardevice();

   
    int centerX = 300;
    int centerY = 200;
    int outerRadius = 100;

    
    bresenhamCircle(centerX, centerY, outerRadius);

    
    float triangleSize = outerRadius * sqrt(3);

   
    float triangleHeight = triangleSize * sqrt(3) / 2;

    
    float innerRadius = triangleSize * sqrt(3) / 6;

  
    int x1 = centerX - (triangleSize / 2);
    int y1 = centerY + (triangleHeight / 3);
    int x2 = centerX + (triangleSize / 2);
    int y2 = centerY + (triangleHeight / 3);
    int x3 = centerX;
    int y3 = centerY - (2 * triangleHeight / 3);

    
    ddaLine(x1, y1, x2, y2);
    ddaLine(x2, y2, x3, y3);
    ddaLine(x3, y3, x1, y1);

   
    bresenhamCircle(centerX, centerY, innerRadius);

   
    std::cout << "Press Enter to exit...";
    std::cin.get();  

   
    closegraph();
    return 0;
}