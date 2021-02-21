#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	float a,b,c,ar;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);//inputting the coordinates of vertices of triangle
	a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));//length of side of triangle 
	b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));//length of side of triangle
	c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));//length of side of triangle
	ar=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;//applying the formula to calculate area of triangle
	//applying if else if to check what kind of triangle it is
	if(ar==0)
		printf("Not Triangle");
	else if(a==b&&b==c&&c==a)
		printf("Equilateral");
	else if(a==b||b==c||c==a)
		printf("Isosceles");
	else
		printf("Scalene");
	return 0;
}
