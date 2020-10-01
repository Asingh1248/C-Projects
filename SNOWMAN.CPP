# include<iostream.h>
# include<conio.h>
# include<graphics.h>
# include<stdlib.h>
# include<dos.h>

void brescir(float r,float xc,float yc)
{
float x,y,p;
x=0;
y=r;

p=3-(2*r);

for(x=0;x<=y;x++)
{
if (p<0)
{
y=y;
p=(p+(4*x)+6);
}
else
{
y=y-1;

p=p+((4*(x-y)+10));
}

putpixel(xc+x,yc-y,15);
putpixel(xc-x,yc-y,15);
putpixel(xc+x,yc+y,15);
putpixel(xc-x,yc+y,15);
putpixel(xc+y,yc-x,15);
putpixel(xc-y,yc-x,15);
putpixel(xc+y,yc+x,15);
putpixel(xc-y,yc+x,15);

}
}
void main()
{
int gd=DETECT,gm,r;

initgraph(&gd,&gm,"C:\\Turboc3\\BGI");

int a,b;
for(int j=0;j<20;j++){
cleardevice();
rectangle(250,95,350,100);     //hat
rectangle(275,50,325,95);
setfillstyle(WIDE_DOT_FILL,14);
floodfill(251,96,15);
floodfill(276,51,15);
brescir(50,300,150);  //face

brescir(100,300,300);       //body
setfillstyle(INTERLEAVE_FILL,CYAN);
floodfill(300,300,15);
brescir(10,280,135);
brescir(10,320,135);        //eyes
line(300,150,280,170);
line(300,160,280,170);
if(j%2==0)
{
setfillstyle(SOLID_FILL,WHITE);
floodfill(280,135,15);
floodfill(320,135,15);
delay(105);
}
ellipse(300,175,180,360,20,10); //mouth
ellipse(300,215,180,360,50,20);
ellipse(300,235,180,360,75,20);  //scarf
setfillstyle(WIDE_DOT_FILL,14);
floodfill(300,240,15);
brescir(10,300,290);
brescir(10,300,330);
brescir(10,300,370);  //button
line(215,250,160,200);
line(160,215,176,215);
line(176,215,176,195);	//left hand
line(385,250,440,200);
line(440,215,424,215);
line(424,215,424,195);	//right hand
for(int i = 0;i<1000;i++)
{
      a= rand()%600;
      b= rand()%600;
      putpixel(a,b,15);
}
delay(145);
}
cout<<"\n\n\t\t\t\t  SNOWMAN using bresenham circle algorithm";
getch();
closegraph();
}
//An awesome Project
