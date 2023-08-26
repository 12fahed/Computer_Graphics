#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

int sign(int a){
	if(a>=0){
	return 1;
	}
	if(a<0){
	return -1;
	}
	return 0;
}

void type(int choice, int i){

   switch choice{
      case 1:
         putpixel(320+x,240-y,15);

      case 2:
         if(i%2!=0){
         putpixel(320+x,240-y,15);
     }
   } 
}

void main(){
   int i;
   float x1, x2, y1, y2, dx, dy,l;
    float xinc, yinc, x, y;

    int gd=DETECT, gm;
    initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
    line(320,0, 320, 480);
    line(0,240, 640, 240);

    printf("Enter the Co-ordinates of First Point: ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the Co-Ordinates of Second Point: ");
    scanf("%f%f",&x2,&y2);
    printf("Type:");
    printf("\n1. Simple");
    printf("\n2. Dotted");
    printf("\n3. Dashed");
    printf("\n4. Dot-Dashed");

    dx=x2-x1;
    dy=y2-y1;

    if(abs(dx)>=abs(dy)){
       l=abs(dx);
    }
    else{
       l=abs(dy);
    }

    xinc = dx/l;
    yinc = dy/l;

    x = x1+0.5*sign(dx);
    y = y1+0.5*sign(dy);

    putpixel(320+x, 240-y, 15);
    i=1;
    while(i<=l){
      x=x+xinc;
      y=y+yinc;
      if(i%2!=0){
      putpixel(320+x,240-y,15);
     }
      i++;
    }
    getch();
}