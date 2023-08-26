#include<stdio.h>
#include<graphics.h>
//#include<dos.h>
void ffill(int x, int y, int f, int b){

	int color;
	color=getpixel(x,y);
	if(color==0){
	delay(2);
		putpixel(x,y,f);
		ffill(x+1,y,f,b);
		ffill(x,y+1,f,b);
		ffill(x-1,y,f,b);
		ffill(x,y-1,f,b);

		ffill(x-1,y-1,f,b);
		ffill(x-1,y+1,f,b);
		ffill(x+1,y-1,f,b);
		ffill(x+1,y+1,f,b);
	}
}

void main(){

	int gd=DETECT,gm, f;
	//initgraph(&gd,&gm,"c:\\bgi");
	initgraph(&gd,&gm,(char*)"");
	line(50,50,100,50);
	line(50,50,50,100);
	line(100,50,100,100);
	line(50,100,100,100);
	ffill(51,51,12,0);
	getch();



}
