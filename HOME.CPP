
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	while(!kbhit()){
	setcolor(BROWN);
	//----------
	line(200,200,500,200);
	//  /
	line(200,200,170,260);
	//  \
	line(500,200,530,260);
	//----------
	line(170,260,530,260);

	setfillstyle(SLASH_FILL,BROWN);
	floodfill(220,220,BROWN);

	// | |
	setcolor(CYAN);
	line(200,260,200,400);
	line(500,260,500,400);
	//----
	line(200,400,500,400);


	//door
	line(250,400,250,310);
	line(320,400,320,310);
	line(250,310,320,310);

	//windows
	line(360,290,450,290);
	line(360,290,360,340);
	line(450,290,450,340);
	line(360,340,450,340);
	//inside horizantal
	line(360,315,450,315);
	//inside verticla
	line(405,290,405,340);

	// moon
	setcolor(YELLOW);
	circle(100,80,30);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(102,79,YELLOW);
	setcolor(WHITE);
		 int rx,ry;
		for(int i=0;i<500;i++)
		{
		    rx=rand()%639;
		    ry=rand()%439;
		    line(rx-10,ry+10,rx,ry);
		}

	delay(200);
	cleardevice();


       }
       //design in the roof
	/*	setcolor(15);
	double j =0.0;
	int i = 170;
	int x =  480;
	for(int k = 1; k<14;k++){
		for(;i<x;)
		{
		ellipse(i,105-j,180,360,10,10);
		i +=20;
		j+=1.2;
		}
	i = i - 310;
	j = j - 30.0;
	x= x+10;
	}*/





	getch();
	closegraph();
}