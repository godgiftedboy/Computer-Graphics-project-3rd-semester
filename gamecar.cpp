#include<graphics.h>
#include<conio.h>
#include<windows.h>
void gameover(int);
void car()
{
	int j=0;
	int i=0;
	while(1)
	{
			setbkcolor(7);
			cleardevice();
		
	
			//CAR
	
		setcolor(BLACK);
		rectangle(420+j,600,480+j,690);
		circle(420+j,690,10);
		circle(420+j,600,10);
		circle(480+j,690,10);
		circle(480+j,600,10);
		settextstyle(1,0,4);
		
		outtextxy(400+j,650,(char*)"CAR");
	
		
		
		delay(1);
	i=i+8;	

	if(kbhit())
			{
				
				int ch=getch();
				if(ch==75)//left
				{
					
					j=j-300;
					if(j<300)
					j=0;
				
					
				}
				else if (ch==77)//right
				{
					
					j=j+300;
					if(j>300)
					j=300;	
					
					
				
			}
		
	
}
	//ENVIRONMENT
		line(300,700,300,0);
	line(600,700,600,0);
	line(900,700,900,0);
	
	//BLOCKS
	setcolor(BLUE);
  setfillstyle(SOLID_FILL,BLUE);
  settextstyle(1,0,4);
	outtextxy(940,350,(char*)"Score:");
	char str[3];
	sprintf(str,"%d",i/10);
	outtextxy(1080,350,str);
	if(i>3400)
	{
		gameover(1);
	}

  rectangle(610,400+i,890,300+i);
		floodfill(651,350+i,BLUE);
		rectangle(310,0+i,590,100+i);
		floodfill(351,50+i,BLUE);
		rectangle(610,-300+i,890,-200+i);
		floodfill(651,-250+i,BLUE);
		rectangle(310,-600+i,590,-500+i);
		floodfill(351,-550+i,BLUE);
		rectangle(610,-900+i,890,-800+i);
		floodfill(651,-850+i,BLUE);
		rectangle(310,-1200+i,590,-1100+i);
		floodfill(351,-1150+i,BLUE);
		rectangle(610,-1450+i,890,-1350+i);
		floodfill(651,-1400+i,BLUE);
		rectangle(310,-1700+i,590,-1600+i);
		floodfill(351,-1650+i,BLUE);
		rectangle(610,-1950+i,890,-1850+i);
		floodfill(651,-1900+i,BLUE);
		rectangle(310,-2200+i,590,-2100+i);
		floodfill(351,-2150+i,BLUE);
		rectangle(610,-2450+i,890,-2350+i);
		floodfill(651,-2400+i,BLUE);
		rectangle(310,-2700+i,590,-2600+i);
		floodfill(351,-2650+i,BLUE);
	if(getpixel(420+j,600)==1||getpixel(480+j,690)==1||getpixel(420+j,690)==1||getpixel(480+j,600)==1)
					{
					gameover(0);
				break;
				}
				
				
}
};
void gameover(int i)
{
while(1)
{
	
	setcolor(RED);
	settextstyle(1,0,7);
	if(i==1)
	{
	outtextxy(330,300,(char*)"HIGHSCORE ");
	}
	else
	{	
	outtextxy(400,350,(char*)"CRASHED ");
}
	settextstyle(1,0,4);
	outtextxy(300,400,(char*)"WANNA DRIVE AGAIN?");
	outtextxy(300,450,(char*)" Press UP arrow to DRIVE again ");
	outtextxy(300,500,(char*)" Press DOWN arrow to exit ");
	if(kbhit())
			{
				cleardevice();
				int ch=getch();
				if(ch==72)//up
				{
					car();
					//ShellExecute(NULL, "open", "gamecar.exe", NULL, NULL, SW_SHOWDEFAULT);
			}
				else if(ch==80)//down
				{
						ShellExecute(NULL, "open", "car.exe", NULL, NULL, SW_SHOWDEFAULT);
				}
		}
	}
	
};

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	initwindow(1200,700);
	car();
		getch();
	closegraph();

	return 0;
}
