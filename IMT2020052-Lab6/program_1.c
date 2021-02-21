#include<stdio.h>
void primefactors(int );
int main()
{
	int n;
	scanf("%d",&n);//inputting n
	primefactors(n);//calling the primefactors func
	return(0);
}
void primefactors(int n)
{
	for(int i=2;i<=n;i++)//This loop starts from 2 and goes upto the number itself, we will use this to check for divisibility
	{	
			while(n%i==0)/*this condition implies that n is divisible by i and this is in a while loop because we will keep checking
						   that the number is divisble by i*/
			{
				printf("%d ",i);// this printf will repeatedly keep printing the prime factors we find
				n=n/i;/*this statement we use to check how many times the prime factor is a factor of the number
					    the moment n is no longer divisible by i, due to implicit typecasting the final quotient which gets stored in n 
					    will be another prime number or its multiple which will get checked as the loop traverses, here whenever the divisibility 
					    check is completed, the value of n gets reduced such that it won't be divisible by the prime factor's multiple 
					    because it has already been divided by it, so next time another prime number will check the divisibility*/  

			}
		
	}
}