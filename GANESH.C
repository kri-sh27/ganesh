#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gm,gd,i;
gm=gd=DETECT;
initgraph(&gm,&gd,"c:\\turboc3\\bgi");
for(i=0;i<30;i++)
{
setcolor(i);
ellipse(235,250,130,420,100,90);//tummy
ellipse(240,320,0,360,4,4);//tummy point
//***leg***//
ellipse(170,330,105,355,100,50);
ellipse(343,330,195,100,80,50);
//***head***//
ellipse(245,147,50,140,40,51);
ellipse(186,150,50,140,40,51);
//***ear***//
       arc(240,138,290,410,50);
       arc(195,135,150,260,50);
//trunk
       setcolor(i+1);
       ellipse(190,180,550,290,0,10);
       ellipse(230,200,170,280,40,30);
       ellipse(255,180,550,290,0,10);
       ellipse(290,173,200,280,40,30);
       ellipse(265,229,0,360,40,1);
       ellipse(275,277,9,100,80,50);
       ellipse(275,250,6,90,80,50);
       //***eyes***//
       ellipse(200,150,0,70,10,10);
       ellipse(240,150,98,180,10,10);
       delay(400);
       }
       getch();
       closegraph();
       }


