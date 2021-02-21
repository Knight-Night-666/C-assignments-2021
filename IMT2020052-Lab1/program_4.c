#include<stdio.h>
/* a program that inputs 2 positive integers and prints the remainder and quotient when first number divided by second 
  number */
int main()
{
	int a,b,q,r;//variable declaration
	scanf("%i%i",&a,&b);//to input 2 numbers
	q=a/b;/* dividng a by b */
	r=a-(q*b);// using the formula devident=quotient*devisor+remainder and assigning the value to r
	printf("%i %i",r,q);//printing the remainder and quotient
	return 0;

}

