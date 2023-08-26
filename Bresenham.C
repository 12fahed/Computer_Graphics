#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int sign(int a){
    if(a<0)
    return -1;
    if(a==0)
    return 0;
    if(a>0)
    return 1;

    return 0;
}

int main(){

   int x1,y1,x2,y2,dx,dy,x,y,temp,exchange,e,i,xs,ys;
   int gd=DETECT, gm;
   initgraph(&gd, &gm, "c:\\bgi");
   printf("Enter first COordinate: ");
   scanf("%d %d",&x1,&y1);
   printf("Enter Second Coordinates: ");
   scanf("%d %d", &x2,&y2);

   dx=x2-x1;
   dy=y2-y1;

   x=x1;
   y=y1;

   xs=sign(x2-x1);
   ys=sign(y2-y1);

   if(dy>dx){
     temp=dx;
     dx=dy;
     dy=temp;

     exchange=0;
   }
   e=(2*dy)-dx;

   i=1;
   putpixel(x,y,15);
   while(e>=0){
       if(exchange==1){
	  x=x+xs;
       }
       else{
	  y=y+ys;
       }
       e=e-(2*dx);
   }
   if(exchange==1){
      y=y+ys;
   }
   else{
      x=x+xs;
   }

}