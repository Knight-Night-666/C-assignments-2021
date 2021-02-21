#include<stdio.h>
int main()
{
	int min,max,n,x=0,range;
	scanf("%d",&n);
	if(n>0)
	{	scanf("%d",&x);
		max=x;//assigning the value of first input to max cuz if i take it as zero it wouldn't work in case of negative numbers
		min=x;//assigning the value of first input to min cuz if i take it as zero it wouldn't work in case of positive numbers
		for(int i=0;i<n-1;i++)//loop for entering n-1 numbers cus i have entered one already
		{
			scanf("%d",&x);//inputting the number
			if(x>=max)//checking if the inputted number is greater than max
				max=x;//assigning the inputted number to max if condition is true 
			if(x<=min)//checking if inputted number is less than min
				min=x;//assigning the inputted number to min if condition is true
		}
		range=max-min;//calc the range
		printf("%d",range);//printing the range
	}
	else
		printf("Invalid input");
	return 0;
}
