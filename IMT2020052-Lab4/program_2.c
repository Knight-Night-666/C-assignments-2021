#include<stdio.h>
int main()
{
	int n,rev=0,temp,count=0;
	scanf("%d",&n);
	temp=n;
	if(n>0)
	{
	//counting the number of digits
	while(n!=0)
	{
		count=count+1;
		n=n/10;
	}
	n=temp;//after the while loop 'n' becomes zero so i updated the value of n with 'temp' which has same value as n'
	while(n!=0)//using a while loop to take out the digits of the number
	{	int var=1;
		temp=n%10;//taking out indivisual digits
		n=n/10;//removing the digit that has been extracted
		for(int i=0;i<count-1;i++)//caculating the power of 10 req since i was getting some error using pow func
			var=var*10;//power of 10 req
		rev=rev+(temp*var);//reversing the number by adding the digit multiplied with respective power of 10
		count--;
	}
	printf("%d",rev);//printing the reversed number
	}
	else
		printf("Invalid input");
	return 0;
}

