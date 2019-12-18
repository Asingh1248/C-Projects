# include<iostream.h>
# include<conio.h>
# include<graphics.h>
# include<stdlib.h>
#include<dos.h>
void midcir(float r)
{
	float x,y,p,xc=250,yc=250;
	x=0;
	y=r;
	putpixel(xc+x,yc-y,15);

	p=1-r;

	for(x=0;x<=y;x++)
	{
		if (p<0)
		{
			y=y;
			p=(p+(2*x)+1);
		}
		else
		{
		y=y-1;

		p=p+((2*(x-y)+1));
	}

	putpixel(xc+x,yc-y,15);
	putpixel(xc-x,yc-y,15);
      //	putpixel(xc+x,yc+y,15);
      //	putpixel(xc-x,yc+y,15);
	putpixel(xc+y,yc-x,15);
	putpixel(xc-y,yc-x,15);
       //	putpixel(xc+y,yc+x,15);
       //	putpixel(xc-y,yc+x,15);
	delay(20);
}
line(70,250,430,250);
}
void main()
{
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	cout<<"\n\t\t\tRAINBOW using midpoint circle algorithm"<<endl;

	midcir(180);
	midcir(160);
	midcir(140);
	midcir(120);
	midcir(100);
	midcir(80);
	midcir(60);

	setfillstyle(SOLID_FILL,5);
       floodfill(80,240,15);
	setfillstyle(SOLID_FILL,9);
	floodfill(100,240,15);
	setfillstyle(SOLID_FILL,1);
	floodfill(120,240,15);
	setfillstyle(SOLID_FILL,2);
	floodfill(140,240,15);
	setfillstyle(SOLID_FILL,14);
	floodfill(160,240,15);
	setfillstyle(SOLID_FILL,6);
	floodfill(180,240,15);
	setfillstyle(SOLID_FILL,4);
	floodfill(200,240,15);

	getch();
	closegraph();
}