#include<stdio.h>
int main()
{
	int n;
	char c;
	scanf("%d",&n);//inputting n from the user
	scanf(" %c",&c);//inputting the character user wants to get displayed, there is space before %c beacuse the				program wasn't working, so i googled it
	if(n<=0)//condition for invalid input
		printf("Invalid input");
	else
	{
		for(int i=1;i<=n;i++)//this outer loop prints 'n' rows 
		{
			for(int j=0;j<(2*i-1);j++)//this prints the character in the rows
			{
				printf("%c ",c);
			}
			printf("\n");
		}
		for(int i=1;i<=(n-1);i++)//this outer loop prints n-1 rows
		{
			for(int j=2*n-3;j>=(2*i-1);j--)//this inner loop prints the character in the rows
				printf("%c ",c);
			printf("\n");
		}
	}
}
