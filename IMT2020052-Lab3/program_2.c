#include<stdio.h>


int main()
{
	int red,green,blue;
	float c,y,m,k,white,a,b,x;
	scanf("%d%d%d",&red,&green,&blue);//inputting values of red,green and blue
	a=red/255.0;
	b=green/255.0;
	x=blue/255.0;
	//applying if else to give greatest value to "white"
	if(a>=b&&a>=x)
		white=a;
	else if(b>=a&&b>=x)
		white=b;
	else if(x>=a&&x>=b)
		white=x;
	if(red==0&&green==0&&blue==0)
	{
		c=m=y=0;
		k=1;
	}
	else
	{
	//assigning value to c,m,y,k	
	c=(white-a)/white;
	m=(white-b)/white;
	y=(white-x)/white;
	k=1-white;
	}
	printf("%.2f %.2f %.2f %.2f",c,m,y,k);
	return 0;
}
