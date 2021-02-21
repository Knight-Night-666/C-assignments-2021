#include<stdio.h>
double factorial(double);//function prototype of factorial
double power(double,double);//function prototype of power
void sinx(double x);//function prototype of sinx
int main()
{	double x;
	scanf("%lf",&x);//inputting x
	sinx(x);
}
double factorial(double n)
{	
	double fac=1;
	for(int i=1;i<=n;i++)//this loop traverses from 1 to n-1,thus we will use it to calc factorial
		fac=fac*i;//this statement will keep updating the fac and finally at end of loop we will get the factorial
	return(fac);//returning the factorial
}
double power(double x,double j)
{
	double pow=1;
	for(int i=1;i<=j;i++)//this loop calculated the appropriate power of the var according to the values passed
		pow=pow*x;//this statement will keep updating pow and finally at end of loop we will get the appropriate power 
	return(pow);//returning the power
}
void sinx(double x)
{	int j=2;// this variable will be used to decide the sign between the terms of sinx expansion
	double val=0;
	for(int i=1;i<=11;i++)
	{
		if(i%2!=0)//this condition checks whether i is odd
		{
			val=val+(power(-1,j)*(power(x,i)/factorial(i)));/*here i used power(-1,j) to decide the sign between the terms of sinx expansion
															  at first iteration -1 to the power 2 will give + sign, then -1 to the power 3 will give 
															  - sign and so it will alternate*/
			j++;//this will increment the value of j, so that the sign between terms can alternate
		}
	}
	printf("%.6lf",val);//printing the value of sinx upto 6 decimal places
}