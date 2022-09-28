#include<graphics.h>
#include<conio.h>
int gameover();
int flap();
int main()
{	
int gd=DETECT,gm;		//initialization of graphics driver
	initgraph(&gd,&gm,(char*)"");
	initwindow(1200,700);
	
	setbkcolor(7);
	flap();

		getch();
		closegraph();
		return 0;
	}
	int flap()
	{
	int i=0,j=0,k=0;
start:
	while(i<10000)
	{
		cleardevice();
		 setcolor(BLUE);
  setfillstyle(SOLID_FILL,BLUE);
	rectangle(500-k,500,550-k,700);
	floodfill(501-k,501,BLUE);
	rectangle(730-k,200,780-k,0);
	floodfill(731-k,100,BLUE);
	rectangle(950-k,500,1000-k,700);
	floodfill(951-k,501,BLUE);
	
	rectangle(1250-k,300,1300-k,0);
	floodfill(1251-k,141,BLUE);
	rectangle(1500-k,400,1550-k,700);
	floodfill(1501-k,501,BLUE);
	rectangle(1730-k,300,1780-k,0);
	floodfill(1731-k,100,BLUE);
	rectangle(1950-k,400,2000-k,700);
	floodfill(1951-k,501,BLUE);
	
		rectangle(2250-k,400,2300-k,0);
	floodfill(2251-k,141,BLUE);
	rectangle(2500-k,300,2550-k,700);
	floodfill(2501-k,501,BLUE);
	rectangle(2730-k,400,2780-k,0);
	floodfill(2731-k,100,BLUE);
	rectangle(2950-k,300,3000-k,700);
	floodfill(2951-k,501,BLUE);
	rectangle(3170-k,400,3220-k,0);
	floodfill(3180-k,100,BLUE);
	setcolor(RED);
		circle(200,100+i,50);
		circle(220,90+i,10);
		line(250,100+i,280,100+i);
		line(280,100+i,250,80+i);
		line(180,150+i,180,170+i);
		line(220,150+i,220,170+i);
		setcolor(BLUE);
		if(i%2==0)
		line(150,100+i,100,50+i);
		else
			
		line(150,100+i,100,150+i);
  settextstyle(1,0,4);
	outtextxy(800,20,(char*)"Score:");
	char str[3];
	sprintf(str,"%d",k/270);
	outtextxy(940,20,str);
			 
			   setfillstyle(SOLID_FILL,RED);
  //floodfill(200+j,100+i,RED);
		delay(1);
		i=i+5;
		k=k+2;
		if(getpixel(180,170+i)==1||getpixel(220,170+i)==1||getpixel(280,100+i)==1||getpixel(250,100+i)==1||getpixel(200,150+i)==1||getpixel(150,100+i)==1||getpixel(200,50+i)==1)//to check if circle circumference touches the line which is black
					{
					gameover();
					break;
				}
		
		if(kbhit())
			{
				//cleardevice();
				int ch=getch();
			if(ch==72)//up arrow key
				{
					i=i-100;
						
			}
	}
};
	getch();
};
int gameover()
{
while(1)
{
	
	setcolor(RED);
	settextstyle(1,0,7);
	outtextxy(320,350,(char*)"GAME OVER");
	if(kbhit())
			{
				//cleardevice();
				int dh=getch();
			if(dh==72)//up
			{
				flap();
			}
		}
}
};
