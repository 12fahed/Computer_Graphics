#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>



void main(){

    int r, p;
    int xc, yc, x, y;

    int gd=DETECT, gm;
    initgraph(&gd,&gm,"c:\\bgi");
    line(320,0, 320, 640);
    line(0,240, 640, 240);
    printf("Enter the Radius: ");
    scanf("%d",&r);
    printf("Enter the coordinates: ");
    scanf("%d%d", &xc, &yc);

    x=0;
    y=r;

    p=1-r;

    while(x<=y){



      putpixel(320+xc+x,240-yc+y, 15);
      putpixel(320+xc+y,240-yc+x, 15);
      putpixel(320+xc-y,240-yc+x, 15);
      putpixel(320+xc-x,240-yc+y, 15);
      putpixel(320+xc-x,240-yc-y, 15);
      putpixel(320+xc-y,240-yc-x, 15);
      putpixel(320+xc+y,240-x-yc, 15);
      putpixel(320+xc+x,240-yc-y, 15);

      if(p<0){
      x=x+1;
      p=p+2*(x)+1;
    }

    else{
      p=p+2*(x)+1-(2*y);
      x=x+1;
      y=y-1;
    }
}
    getch();
}