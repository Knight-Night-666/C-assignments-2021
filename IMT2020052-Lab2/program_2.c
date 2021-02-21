#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	double y;
	scanf("%f",&x);
	y=pow(x,4)-pow(x,3)-(pow(x,2)*24)+(4*x)+80;//biquadratic equation
	if(y==0)
		printf("root");//if y=0,then x is a root of y
	else
	{	if(y>0)
			printf("positive");//sign of y
		else
			printf("negative");//sign of y
	}
	return 0;
}
