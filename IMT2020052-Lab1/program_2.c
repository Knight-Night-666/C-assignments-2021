#include<stdio.h>
/*a program that input length and breadth of rectangle and radius of circle and gives the output perimeter and area of 
both circle and rectangle*/
int main()
{
	
	float a,b,c,pr_rec,ar_rec,pr_cir,ar_cir;//variable declaration
	scanf("%f%f%f",&a,&b,&c);//to imput length,breadth of rectangle and radius of circle
	pr_rec=2*(a+b);//perimeter of rectagle
	ar_rec=a*b;//area of rectangle
	pr_cir=2*3.14*c;//perimter of circle	
	ar_cir=3.14*c*c;//area of circle
	printf("%.2f %.2f %.2f %.2f",ar_rec,pr_rec,ar_cir,pr_cir);/*using float precison to print output upto 2 decimal 								    places*/     
	return 0;
}
