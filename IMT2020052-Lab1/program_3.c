#include<stdio.h>
//a program that inputs a number "n" and gives output as the average of the squares of first n natural numbers
int main()
{
	int n;//variable declaratiom
	float avg;//variable declaration
	scanf("%i",&n);//to input the number
	avg=n*(n+1)*(2*n+1);//using the formula for sum of squares and assigning its value to avg
	avg=avg/6;
	avg=avg/n;
	printf("%.2f",avg);//using float precison to print average upto 2 decimal places
	return 0;
}
