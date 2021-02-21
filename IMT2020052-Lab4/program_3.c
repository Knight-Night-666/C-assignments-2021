#include<stdio.h>
int main()
{
	int n,temp,num=0,count=0;
	scanf("%d",&n);	
	if(n>=0)//ques has given no negative number allowed
	{	while(n!=0)//traversing through the digits
		{
			int var=1;
			temp=n%8;//taking out the remainder
			n=n/8;//getting the quotient
			for(int i=0;i<count;i++)//calculating the appropriate power of 10 req cuz pow func didn't work
				var=var*10;//var contains the appropriate power of 10
			num=num+temp*var;//storing the remainders as the digits of a new number
			count++;//for increasing the power of 10 req
		}
		printf("%d",num);//printing the new number containing remainders in rev order
	}
	else
		printf("Invalid input");//case of neagtive input
	return 0;
}
