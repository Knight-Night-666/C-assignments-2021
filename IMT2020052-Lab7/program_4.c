#include<stdio.h>
#include<math.h>
int steps_req(int n);
int main()
{	int n,steps;
	scanf("%d",&n);
	steps=steps_req(n);
	printf("%d",steps);
	return 0;
}
/* we can calculate the number of steps required by first trasfering all discs exceot the bottom most one fronm
   A to B and then we transfer the bottom most disc from A to C and then transfer discs from B to C finally*/

/*so the logic here is that through observing the cases till n=5 we can clearly see 
  a pattern that there is a difference of 2^(n-1) between the successive number
  of steps. like for 1 disc we have 1 steps, for 2 we have 3 steps for 3 we have 7 steps
  for 4 we have 15 steps , for 5 we have 31 steps
  so steps= 		1   3   7   15   31
	difference= 	  2   4   8    16*/
int steps_req(int n)
{
	if(n==1)//this is the end case where if n==1 then we return 1, this is beacause for 1 disc only one move is required
		return(1);
	else
	{
		return((int)pow(2,n-1)+steps_req(n-1));//here we add 2^(n-1) and then call the function again and again to form a recursion
											   //and at the end case when n=1 we have returned 1 so its would get added to the powers of 2 repeatedly.
	}
}