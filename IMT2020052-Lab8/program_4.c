#include<stdio.h>
void matmul(int m1,int n1,int (*a)[n1],int m2,int n2,int (*b)[n2]);
int main()
{	
	int m1,n1,m2,n2,i,j;
	scanf("%d%d%d%d",&m1,&n1,&m2,&n2);//inputting the rows and columns of the 2 matrices respectively
		int a[m1][n1],b[m2][n2];
		for(i=0;i<m1;i++)//initialising the first matrix
		{
			for(j=0;j<n1;j++)
				scanf("%d",&a[i][j]);
		
		}
		for(i=0;i<m2;i++)//initialising the second matrix
		{
			for(j=0;j<n2;j++)
				scanf("%d",&b[i][j]);
		}
	matmul(m1,n1,a,m2,n2,b);//calling the multiplication function
	return 0;
}
void matmul(int m1,int n1,int (*a)[n1],int m2,int n2,int (*b)[n2])
{
	if(n1!=m2)//if the columns of first are not equal to the rows of second then the 2 matrices are not multiplicable.
		printf("NOT POSSIBLE");
	else
	{	
		int i,j,k;
		for(i=0;i<m1;i++)//this loop controls the rows of the first matrix
		{
			for(j=0;j<n2;j++)//this loop controls the columns of the second matrix and this is inside the outer loop so that each row gets multiplied with all columns
			{	int x=0;//x is initiliased to zero beacuse very time the j loop runs we have to find a new value(element of the multiplied matrix)
				for(k=0;k<n1;k++)//this simply controls the columns of first matrix and the rows of the second matrix
				{
					x=x+(*(*(a+i)+k))*(*(*(b+k)+j));//we keep multiplying the respective elements of the row of first with the ones in columns of second and adding the values to get the final element
				}
				printf("%d ",x);//printing the element of the final multiplied matrix
			}
			printf("\n");//this takes us to the next row
		}
	}

}