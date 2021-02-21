#include<stdio.h>
void sort(int a[],int n);
void input(int a[],int n);
void combine(int a[],int m,int b[],int n);
void print(int a[],int n);
int main()
{	
	int m;
	scanf("%d",&m);//inputting number of elements in array 1
	int a[m];
	input(a,m);//inputting the values in the array 1
	int n;
	scanf("%d",&n);//inputting number of elements in array 2
	int b[n];
	input(b,n);//inputting the values in the array 2
	combine(a,m,b,n);//calling the comibine function to sort the 2 arrays into a new array
}
void combine(int a[],int m,int b[],int n)
{	sort(a,m);//here we first sort the array indivisually
	sort(b,n);//here we first sort the array indivisually
	int i,j,t;
	int c[m+n];
	for(i=0;i<m;i++)//this loop keeps track of the elements of array 1 and compares each of them with every element in array 2
	{
		for(j=0;j<n;j++)//this loop keeps track of the elements in array 2
		{
			if(a[i]>=b[j])//if the element is greater than then the one in array 2, we swap both of them
			{
				t=b[j];
				b[j]=a[i];
				a[i]=t;
			}
		}
	}
	sort(a,m);//sorting the array
	sort(b,n);//since a case might arise where the elements of 2nd array may not be in perfect ascending order so we sort the whole array
	/* for example:
					(2,1,3)&(2,1)---> on sorting (1,2,3)&(1,2)--->(1,1,3)&(2,2)---> which finally becomes (1,1,2)&(3,2) so clearly
					we need to sort the last array so that both the arrays are in perfect ascending order when taken
					together and thus we get (1,1,2)&(2,3).
	*/
	for(i=0;i<m;i++)//putting a into c
		c[i]=a[i];
	for(i=0;i<n;i++)//appending b ahead of a into c thus forming the combined sorted array
		c[m+i]=b[i];
	print(c,m+n);//printing the sorted and combined array
}
void sort(int a[],int n)//bubble sort function
{	
	int t;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{	if(a[j]>a[j+1])
			{	t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}	
		}
	}
}
void input(int a[],int n)//function for taking input of array
{
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void print(int a[],int n)//function for printing the array
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}