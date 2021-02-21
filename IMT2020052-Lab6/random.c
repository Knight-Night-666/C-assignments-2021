#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{	for(int k=4;k>i;k--)
			{
				printf(" ");
			}
			if(j%2!=0&&j!=1)
				printf("%d ",2*(i-j));
			if(j==0||j==i-1)
				printf("1 ");
			else
				printf("%d ",i-1);
		}
		printf("\n");

	}
}