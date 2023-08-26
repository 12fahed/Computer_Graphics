#include <stdio.h>
#include <graphics.h>

void drawEllipse(int xc, int yc, int rx, int ry) {
    int x = 0, y = ry, p2;
    int p1 = ry * ry - rx * rx * ry + rx * rx / 4;

    while (2 * ry * ry * x <= 2 * rx * rx * y) {
	putpixel(xc + x, yc + y, WHITE);
	putpixel(xc - x, yc + y, WHITE);
	putpixel(xc + x, yc - y, WHITE);
	putpixel(xc - x, yc - y, WHITE);

	if (p1 < 0) {
	    x++;
	    p1 = p1 + 2 * ry * ry * x + ry * ry;
	}
	else {
	    x++;
	    y--;
	    p1 = p1 + 2 * ry * ry * x - 2 * rx * rx * y - ry * ry;
	}
    }

    p2 = ry * ry * (x + 0.5) * (x + 0.5) + rx * rx * (y - 1) * (y - 1) - rx * rx * ry * ry;

    while (y >= 0) {
	putpixel(xc + x, yc + y, WHITE);
	putpixel(xc - x, yc + y, WHITE);
	putpixel(xc + x, yc - y, WHITE);
	putpixel(xc - x, yc - y, WHITE);

	if (p2 > 0) {
	    y--;
	    p2 = p2 - 2 * rx * rx * y + rx * rx;
	}
	else {
	    y--;
	    x++;
	    p2 = p2 + 2 * ry * ry * x - 2 * rx * rx * y + rx * rx;
	}
    }
}

int main() {
    int gd = DETECT, gm;
     int xc,yc,rx,ry;
    initgraph(&gd, &gm,"c:\\bgi");


    xc = getmaxx() / 2;
    yc = getmaxy() / 2;
    rx = 100; // horizontal radius
    ry = 50;  // vertical radius

    drawEllipse(xc, yc, rx, ry);

    getch();
    closegraph();
    return 0;
}
