#include<graphics.h>
#include<conio.h>
void gameover()
{
	
	setcolor(RED);
	settextstyle(1,0,7);
	outtextxy(400,350,(char*)"CRASHED ");
	
};

int heli(int i,int j)
{
	setbkcolor(7);
  int b=j;   //y-axis 
  int c=i;  //x-axis 
  	
	
  
 // Helicopter
  setcolor(BLACK);
  line(115+c,247+b,120+c,240+b);                //UpperBackSmallInclinedLine
  line(166+c,247+b,161+c,240+b);                //UpperFrontSmallInclinedLine 
  line(120+c,240+b,161+c,240+b);                //UpperHorizontallLIne
  line(139+c,240+b,139+c,235+b);                //SmallBAckVerticalLIne // gameover pixel check top
  line(141+c,240+b,141+c,235+b);                //SmallFrontVerticalLine
  arc(141+c,272+b,140,180,40);                  //BackArc
  line(165+c,248+b,165+c,266+b);                //Glass
  line(165+c,266+b,180+c,266+b);                //Glass
  arc(140+c,272+b,0,40,40);                         //FrontArc
  circle(147+c,268+b,1);                                //KeyHole
  setcolor(BLUE);
  setfillstyle(SOLID_FILL,BLUE);
  rectangle(130+c,282+b,150+c,255+b);         //Door
  floodfill(131+c,270+b,BLUE);
  
  setcolor(0);
  line(110+c,247+b,171+c,247+b);                 //MiddleLine
  line(30+c,275+b,100+c,272+b);                   //backUpperLine
  line(180+c,273+b,180+c,285+b);                //frontArcVerticalLine gameoverfront
  line(25+c,285+b,180+c,285+b);                 //BottomBigLine
  line(30+c,275+b,20+c,260+b);                  //BackEndInclinedLine
  line(20+c,260+b,14+c,260+b);                  //BackUpperLine
  line(14+c,260+b,25+c,285+b);                  //LastEndInclinedLine gameover back
  circle(18+c,262+b,1);                               //BackSmallCircle
  //Legs
  line(80+c,299+b,167+c,299+b);                 //LowerBigLine bottom gameover
  line(80+c,295+b,167+c,295+b);                 //UpperBigLine
  line(80+c,295+b,80+c,299+b);                  //BackVerticalLine
  arc(167+c,279+b,270,310,20);                  //LowerCurve
  arc(167+c,275+b,270,310,20);                  //UpperCurve
  line(180+c,291+b,180+c,293+b);                //FrontSmallestLine
  line(110+c,285+b,110+c,295+b);                //StraightLine
  line(113+c,285+b,113+c,295+b);                //StraightLine
  line(165+c,285+b,160+c,295+b);                //VerticalLine
  line(163+c,285+b,158+c,295+b);                //VerticalLine
  //MovingWings
  if(j%2==0){
   line(141+c,235+b,75+c,243+b);
   line(141+c,235+b,83+c,258+b);
   line(141+c,235+b,164+c,278+b);
   line(141+c,235+b,99+c,268+b);
   line(141+c,235+b,196+c,243+b);
   line(141+c,235+b,195+c,258+b);
  }
  else{
  
   line(141+c,235+b,71+c,236+b);
   line(141+c,235+b,79+c,250+b);
   line(141+c,235+b,110+c,278+b);
   line(141+c,235+b,197+c,236+b);
   line(141+c,235+b,196+c,250+b);
   line(141+c,235+b,185+c,267+b);
   line(141+c,235+b,141+c,282+b);
  }
  setcolor(BLUE);
  setfillstyle(SOLID_FILL,BLUE);
	rectangle(250,450,280,0);
	floodfill(251,441,BLUE);
	rectangle(500,200,530,700);
	floodfill(501,201,BLUE);
	rectangle(730,600,760,0);
	floodfill(731,500,BLUE);
	rectangle(950,100,980,1200);
	floodfill(951,500,BLUE);
	rectangle(1170,600,1200,0);
	floodfill(1180,500,BLUE);
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	initwindow(1200,700);
	again:
	settextstyle(1,0,7);
	outtextxy(50,350,(char*)"Press arrow keys to start: ");
	
	int i=0,j=0;

	
		while(1)
	{
		if(i>1000)
		{
			setcolor(RED);
	settextstyle(1,0,7);
	outtextxy(400,350,(char*)"PASSED");
	delay(3000);
	break;
		}
	if(kbhit())
			{
				cleardevice();
				int ch=getch();
				if(ch==75)//left
				{
					
					i=i-5;
					heli(i,j);
						if(getpixel(180+i,273+j)==1||getpixel(14+i,260+j)==1||getpixel(80+i,299+j)==1||getpixel(167+i,299+j)==1||getpixel(120+i,299+j)==1||getpixel(139+i,235+j)==1||getpixel(120+i,240+j)==1)//to check if circle circumference touches the line which is black
					{
					gameover();
					break;
				}
					
				
				}
				else if (ch==77)//right
				{
					
					i=i+5;	
					
					heli(i,j);
					if(getpixel(180+i,273+j)==1||getpixel(14+i,260+j)==1||getpixel(80+i,299+j)==1||getpixel(167+i,299+j)==1||getpixel(120+i,299+j)==1||getpixel(139+i,235+j)==1||getpixel(120+i,240+j)==1)//checking if chopper touches the blue surfaces
					{
					gameover();
					break;
				}
				}
				else if(ch==80)//down
				{
					j=j+5;
					heli(i,j);
				if(getpixel(180+i,273+j)==1||getpixel(14+i,260+j)==1||getpixel(80+i,299+j)==1||getpixel(167+i,299+j)==1||getpixel(120+i,299+j)==1||getpixel(139+i,235+j)==1||getpixel(120+i,240+j)==1)
					{
					gameover();
					break;
				}
				}
				else if(ch==72)//up
				{
					j=j-5;
					heli(i,j);
				if(getpixel(180+i,273+j)==1||getpixel(14+i,260+j)==1||getpixel(80+i,299+j)==1||getpixel(167+i,299+j)==1||getpixel(120+i,299+j)==1||getpixel(139+i,235+j)==1||getpixel(120+i,240+j)==1)
					{
					gameover();
					break;
				}
				}
			}

		
	}
	
	
	while(1)
	{
		settextstyle(1,0,4);
	outtextxy(300,400,(char*)"WANNA FLY AGAIN?");
	outtextxy(300,450,(char*)" Press UP arrow to fly again ");
	outtextxy(300,500,(char*)" Press DOWN arrow to exit ");
	
	if(kbhit())
			{
				cleardevice();
				int ch=getch();
				if(ch==72)//left
				{
					goto again;
			}
				else if(ch==80)//down
				{
						ShellExecute(NULL, "open", "car.exe", NULL, NULL, SW_SHOWDEFAULT);
				}
		}
	}
	delay(10);
		getch();
		return 0;
	}
		

