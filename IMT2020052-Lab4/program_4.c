#include<stdio.h>
int main()
{
	int j,x,n,count=0,hcf=0;
	scanf("%d",&n);
	if(n>0)
		
	{	if(n==1)//since in ques it is given that gcd count of 1 is 1 so added a condition here 
			count=1;
		else
		{
		for(j=1;j<=n-1;j++)//goes through all numbers smaller than 'n'
		{
		   for(x=1;x<=j;x++)//a loop which checks the divisibility of 'n' and 'i' for every no smaller than 'i'
			{
			if(n%x==0&&j%x==0)/*if both numbers are divisible by 'x' that means x is hcf this loops goes on 					   to find the largest possible number*/
					hcf=x;
			}
			if(hcf==1)//hcf =1 means numbers are co prime
				count=count+1;//counting the number of times such a number comes

		}
		}
		printf("%d",count);//printing the total number of gcd combos
	}
	else
		printf("Invalid input");
}

