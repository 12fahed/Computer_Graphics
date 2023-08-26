#include<stdio.h>
#include<graphics.h>

void bfill(int x, int y, int f, int b){

	int color;
	color=getpixel(x,y);
	if(color!=b && color!=f){
		putpixel(x,y,f);

		bfill(x+1,y,f,b);
		bfill(x,y+1,f,b);
		bfill(x-1,y,f,b);
		bfill(x,y-1,f,b);

		bfill(x-1,y-1,f,b);
		bfill(x-1,y+1,f,b);
		bfill(x+1,y-1,f,b);
		bfill(x+1,y+1,f,b);
	}
}

void main(){

	int gd=DETECT,gm, f;
	initgraph(&gd, &gm, "c:\\bgi");
	line(50,50,100,50);
	line(50,50,50,100);
	line(100,50,100,100);
	line(50,100,100,100);
	f=getpixel(50,50);
	bfill(51,51,10,f);
	getch();

}
