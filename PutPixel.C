#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){

  int gd=DETECT,gm;
  int a,b,c;
  initgraph(&gd, &gm, "c:\\bgi");
  printf("Enter X Co-ordinate: ");
  scanf("%d", &a);
  printf("Enter Y Co-ordinate: ");
  scanf("%d", &b);
  printf("Enter Intensity: ");
  scanf("%d", &c);
  putpixel(a,b,c);
  getch();
  return 0;

}
