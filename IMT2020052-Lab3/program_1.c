#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,r1,x2,y2,r2;
	double c1c2;
	scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);//inputting the coordinates of center ad radius of 2 circles
	c1c2=sqrt(pow(x2-x1,2)+pow(y2-y1,2));//calculating distance between the centers of both circles
	if(r1<0||r2<0)
		printf("Invalid Input");
	else
	{	 
		if(c1c2>r1+r2)//condition to check if there is no intersection
			printf("No Intersection");
		else if(c1c2==r1+r2)//condition to check if 2 circles are touching 
			printf("Touch");
		else
			printf("Intersect");
	}
	return 0;
}

