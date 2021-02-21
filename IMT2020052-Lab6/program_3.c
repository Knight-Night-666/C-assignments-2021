#include<stdio.h>
#include<math.h>
double dist(double,double,double,double);// function prototype of dist
float area(double,double,double,double,double,double);// function prototype of area
void inside_out(double x1,double y1,double x2,double y2,double x3 ,double y3,int n);// function prototype of inside_out
int main()
{
	double x1,y1,x2,y2,x3,y3;
	int n;
	scanf("%lf%lf",&x1,&y1);// inputting the 1st vertex of triangle
	scanf("%lf%lf",&x2,&y2);// inputting the 2nd vertex of triangle
	scanf("%lf%lf",&x3,&y3);// inputting the 3rd vertex of triangle
	scanf("%d",&n);//inputting the number of points to be entered by user
	inside_out(x1,y1,x2,y2,x3,y3,n);// inputting the required amount of points and checking if they lie inside or outside the triangle
	
}
double dist(double x1,double y1,double x2,double y2)// function to calculate distance between 2 points
{
	double d;
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//using distance formula to find distance between 2 points
	return(d);
}
float area(double x1,double y1,double x2,double y2,double x3,double y3)// function to calculate the area of the triangle formed by 3 points
{
	double a,b,c,s;
	float area;
	a=dist(x1,y1,x2,y2);// 1st side of triangle
	b=dist(x2,y2,x3,y3);// 2nd side of triangle
	c=dist(x3,y3,x1,y1);// 3rd side of triangle
	s=(a+b+c)/2;// semiperimeter of triangle
	area=sqrt(s*(s-a)*(s-b)*(s-c));// using heron's formula to calculate the area of triangle
	return(area);
}
void inside_out(double x1,double y1,double x2,double y2,double x3 ,double y3,int n)//function to input the required number of points and check if they lie inside or outside
{
	float d;
	d=area(x1,y1,x2,y2,x3,y3);// area of the triangle
	printf("%lf\n",d);
	for(int i=1;i<=n;i++)//this loop is used to enter a number of points according to requirement of user and check whether they lie inside or outside the triangle
	{	double x,y;
		scanf("%lf%lf",&x,&y);
		float a,b,c;
		a=area(x1,y1,x2,y2,x,y);// area of the triangle formed by 1st,2nd vertices and point entered
		b=area(x2,y2,x3,y3,x,y);// area of the triangle formed by 2nd,3rd vertices and point entered
		c=area(x3,y3,x1,y1,x,y);// area of the triangle formed by 3rd,1st vertices and point entered
		if(a+b+c==d)/*the logic used in this is that if a point lies inside a triangle then the sum of areas of 3 triangles formed by the 3 vertices
					   and the point entered is equal to the area of the triangle with original 3 vertices. This can be easily shown by drawing a triangle
					   on a paper and taking an arbitrary point inside and outside the triangle. Here i used areas as float because precison of double is more than float*/
			printf("INSIDE\n");
		else
			printf("OUTSIDE\n");
	}
}
