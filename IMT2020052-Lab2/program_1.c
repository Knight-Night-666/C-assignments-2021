#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	double x,y,z;//variable declaration
	scanf("%lf%lf",&x,&y);//input of 2 numbers
	if(x>=y)
		z=log(y);
	else
		z=exp(x);
	printf("%.2lf",z);//printing value
	return 0;
}
