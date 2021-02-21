#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,flag=0,temp=0,sum,n;
	scanf("%d %d",&a,&b);//inputting the range of numbers
	if(a<0||b<0)//condition for invalid input
		printf("Invalid input");
	else
	{
		for(int i=a;i<=b;i++)//this loop iterates throughout the range of numbers inputted
		{
			n=i;
			sum=0;
			while(n>0)//this loop extracts the digits of the number and calc the sum of their cubes
			{
				temp=n%10;//extracting the digits of the number 
				sum=sum+(temp*temp*temp);//calculating the sum of cube of digits
				n=n/10;//removing the digit that has been used
			}
			if(sum==i)//checking if number is armstrong
			{
				printf("%d\n",i);
				flag=1;//changing the value of flag
			}
		}
		if(flag!=1)//flag !=1 implies that the statement flag=1 didn't execute, which means that the if 	
			   //condition wasn't true even one time,thus no armstrong number exist
			printf("No Armstrong Number");
	}
}
