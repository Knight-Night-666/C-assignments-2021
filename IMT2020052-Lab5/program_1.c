#include<stdio.h>
int main()
{ 
	int i,j,k,n,flag=0;
	scanf("%d",&n);//inputting the number by user
	if(n<=0)//condition for invalid input
		printf("Invalid input");
	else
	{
	for(k=1;k<=n;k++)//this the outer loop,that iterated from 1 to n
	{
		for(j=1;j<=n;j++)//middle loop that also iterates from 1 to n
		{
			for(i=1;i<=n;i++)//inner loop that iterates from 1 to n
			{
				if(i*i+j*j==k*k)//this condition checks whether the combo of 3 is pythagorean triplet
				{
					if(k>j&&k>i&&j>i)//this condition checks that k>j>i
					{ 
						printf("%d %d %d\n",i,j,k);//printing in ascending order
						flag=1;//this is flag variable
					}
				}
			}
		}
	}
	
	if(flag!=1)//if flag != 1 then it implies that if condition of inner most loop wasn't satisfied even one time
		   //thus there exist no triplet
		printf("No triplet");
	}

}

