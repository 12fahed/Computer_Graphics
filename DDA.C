#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

void main(){

    int x1, x2, y1, y2, dx, dy, l, i;
    float xinc, yinc, x, y;

    int gd=DETECT, gm;
    initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");

    printf("Enter the Co-ordinates of First Point: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the Co-Ordinates of Second Point: ");
    scanf("%d%d",&x2,&y2);

    dx=x2-x1;
    dy=y2-y1;

    if(abs(dx)>=abs(dy)){
       l=dx;
    }
    else{
       l=dy;
    }

    xinc = dx/l;
    yinc = dy/l;

    x = x1;
    y = y1;

    putpixel((int)x,(int)y, 15);
    i=1;
    while(i<=l){
      x=x+xinc;
      y=y+yinc;
      putpixel((int)x, (int)y, 15);
      i++;

    }
    getch();
}