
# include <iostream.h>
# include <graphics.h>
# include <conio.h>
# include <dos.h>
void main()
{

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");

 while(!kbhit())
 {
  for(int i=50;i<500;i++)
  {
  cleardevice();
  setcolor(WHITE);
  line(50+i,200,90+i,160);
  line(90+i,160,150+i,160);
  line(50+i,200,100+i,200);
  line(88+i,145,100+i,200);
  line(150+i,160,100+i,200);
  line(145+i,145,170+i,200);
  line(142+i,145,155+i,145);
  line(80+i,145,97+i,145);

  arc(155+i,153,300,90,7);

  //Wheels
  circle(50+i,200,25);
  circle(170+i,200,25);


  setcolor(RED);
  //1st wheel strokes
  line(50+i,200,70+i,210);  //  \
  line(50+i,200,30+i,210);  // /
  line(50+i,200,30+i,190);
  line(50+i,200,50+i,225);  // |
  line(50+i,200,50+i,175);  //   |

  //2nd Wheel strokes
  line(170+i,200,190+i,210);
  line(170+i,200,150+i,210);
  line(170+i,200,150+i,190);
  line(170+i,200,170+i,225);
  line(170+i,200,190+i,185); // |

  setcolor(YELLOW);
  line(0,225,800,225);
  delay(20);
 }
}
 clrscr();
 getch();
 closegraph();


}