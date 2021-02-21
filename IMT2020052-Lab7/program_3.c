#include<stdio.h>
int recursion_GCD(int x,int y);
int main()
{	
	int m,n,z;
	scanf("%d%d",&m,&n);
	z=recursion_GCD(m,n);
	printf("%d",z);
	return 0;
}
int recursion_GCD(int x,int y)
{
	int a,b;
	//just below i have assigned the largest of the 2 numbers x and y to b and the smaller one to a, because gcd(a,b)=gcd(a,b%a) if b>a
	if(x>y)
	{
		b=x;a=y;
	}
	else
	{
		b=y;a=x;
	}
	if(a!=0)//now, provided that a!=0, we shall call the function again and again till a becomes zero 
	{
		return(recursion_GCD(a,b%a));
	}
	else//this is the end case condition when a=0, then the value of b itself would be the gcd
	{
		return(b);
	}
	/*example of my logic lets suppose we take (56,91) and apply euclid's theorem -->(56,35)->value swap->(35,56)-->(35,21)
	  ->value swap-> (21,35)-->(21,14)->value swap->(14,21)-->(14,7)->value swap->(7,14)-->(7,0)->value swap->(0,7) so
	  finally we get a=0 and b=7 where b=7[value swap means a gets the least and b gets the most value]*/

}