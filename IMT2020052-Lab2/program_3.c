#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,x,y,z;//variable declaration
	scanf("%lf%lf%lf",&a,&b,&c);//inputting coefficients of quadratic equation
	d=(b*b)-(4*a*c);//discriminant
	if(d>=0)
		z=sqrt(d);
	else
		z=sqrt(-d);
	if(a==0)
		printf("invalid input");
	else
	{
		if(d>0)
		{
			x=((z-b)/2)/a;//calculation of root
			y=(-(b+z)/2)/a;//calculation of root
			x>y?printf("%.2lf\n%.2lf",y,x):printf("%.2lf\n%.2lf",x,y);//printing the larger one before 
		}
		if(d==0)
		{
			x=y=-b/(2*a);//calculation of roots
			printf("%.2lf\n%.2lf",x,y);//printing of roots in separate line
		}
		if(d<0)
		{
			if(b==0)
				x=0;
			else
				x=-b/(2*a);//real part of root
			y=(z/2)/a;//imaginary par of root
			z=-y;//imaginary part of root
			y>0?printf("%.2lf,%.2lf\n%.2lf,%.2lf",x,y,x,z):printf("%.2f,%.2f\n%.2f,%.2f",x,z,x,y);
		}
	}
		return 0;
}

