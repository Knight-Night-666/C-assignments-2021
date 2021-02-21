#include<stdio.h>

int main()
{
	int h,t,g;
	float c;
	scanf("%d%f%d",&h,&c,&t);//inputting values of hardness,carbon content and tensile strength
	//applying if else if ladder to assign value to g according to condition
	if(h>50&&c<0.7&&t>5600)
		g=10;
	else if(h>50&&c<0.7)
		g=9;
	else if(c<0.7&&t>5600)
		g=8;
	else if(h>50&&t>5600)
		g=7;
	else if(h>50||c<0.7||t>5600)
		g=6;
	else
		g=5;
	printf("%d",g);
	return 0;
}
