#include<stdio.h>
void shift(int a[],int n,int x);
int main()
{	int r,c,i,j;
	scanf("%d%d",&r,&c);//inputting the rows and columns of the matrix
	int a[r][c];
	for(i=0;i<r;i++)//assigning the appropriate value to the matrix according to the given formula
	{
		for(j=0;j<c;j++)
			a[i][j]=i+j;
	}
	int arr[r];//this array holds the number of shifts in each row
	for(i=0;i<r;i++)//this loop inputs the respective number of shifts in the appropriate row
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<r;i++)//this loop passes each row to the function and circularly shifts them left by the appropriate amount
	{
		shift(a[i],c,arr[i]);//we pass the whole row directly as an array
	}
	for(i=0;i<r;i++)//this loop prints the final shifted matrix
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	return 0;
}
void shift(int a[],int n,int x)
{	for(int j=0;j<x;j++)//this loop determines how many times the array is going to shift
	{	int temp=a[0];//we made a backup of the first element as its going to overwritten when the loop runs
		for(int i=0;i<n;i++)//goes through each element and shifts them circularly right by one place
		{	
			if(i==n-1)//we assign first element to the last place (first element is the one thats over written and lost so we use a temporary var.)
				a[i]=temp;
			else
				a[i]=a[i+1];//we assign the value of the next element to the current element thus inducing a cyclical shift 
		}
	}
}

