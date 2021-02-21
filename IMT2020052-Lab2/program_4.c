#include<stdio.h>
int main()
{
	int s=0,i,n;//variable declaration
	scanf("%d",&n);//inputting the number whose sum of digits is required
	while(n>0)//while loop that iterates till n>0
	{
		i=n%10;//to get the last digit
		s=s+i;//to add the digit to the sum
		n=n/10;//to remove the last digit
	}	
	printf("%d\n",s);//printing sum
	return 0;
}	
