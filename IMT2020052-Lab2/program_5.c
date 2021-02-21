#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,r,q;//variable declaration
	scanf("%lf%lf",&x,&y);//inputting the coordinates
	r=sqrt((x*x)+(y*y));
	q=atan2(y,x);//math function to calculate arc tan
	printf("%.2lf %.2lf",r,q);//printing in new coordinates
	return 0;
}
