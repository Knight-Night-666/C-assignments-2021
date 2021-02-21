#include<stdio.h>
void bino_coeff(int,int);// function prototype for bino_coeff.
int main()
{
	int n,r;
	scanf("%d%d",&n,&r);//inputting values of n and r.
	bino_coeff(n,r);//calling the function to calculate the value of ncr.
}
void bino_coeff(int n,int r)//function to calculate the value of ncr.
{
	double a=1;
	for(double i=0;i<r;i++)
	{
		a=a*((n-i)/(r-i));/*here the logic i used was instead of calculating the factorial which could have overflowed
						    i used the formula ncr=n(n-1)(n-2).....(n-r)/r! since value of n/r,n-1/r-1,etc would be 
						    comparably smaller than whole factorials and there would no longer be risk of overflow in the
						    intermediate stage*/ 
	}
	printf("%.0lf",a);//printing the value of ncr as an integer.
}