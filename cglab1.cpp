//TO LINE-DRAWING BY USING DIGITAL DIFFERENTIAL ANALYZER(DDA) ALGORITHM.

#include<graphics.h>
#include<iostream>
using namespace std;
#include<dos.h>
#include<math.h>

int main()
{
	float x,y,dx,dy, step, x1=55.0,y1=60.0,x2=350.0,y2=360.0;
	int i=1, gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	cout<<"\t\t\t\t\t PROJECT No. 01\n";
	cout<<"**** DDA Algorithm for line Drawing.****\n";
	cout<<"sabina shrestha\n";
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy)
		step=dx;
	else
		step=dy;
	dx=dx/step;
	dy=dy/step;
	x=x1;
	y=y1;
	while(i<=step)
	{
		putpixel(x,y,5);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(200);
	}
	closegraph();
	return 0;
}
