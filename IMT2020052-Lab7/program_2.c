#include<stdio.h>
#include<math.h>
int is_palindrome(int x);
int main()
{	int x;
	scanf("%d",&x);
	if(is_palindrome(x))
		printf("Yes");
	else
		printf("No");
	return 0;
}
int is_palindrome(int x)
{	int temp,y,z,c=0;
	if(x==0)//this is the end case when the funtion is called for the last time and value of n becomes zero
	{
		return(1);/*here we have returned 1 i.e the number is palindrom which implies that if(y==z) condition gets executed every time
			      	and else condition didn't execute even once because then the value return will be zero and it would not be a palindrom*/
	}
	temp=x;
	while(temp>0)//here i have counted the number of digits in the number that is passed using a loop
	{
		temp=temp/10;
		c++;
	}
	y=x/(int)pow(10,c-1);//extracting the last place digit from the number
	z=x%10;//extracting the first digit of the number
	if(y==z)/*here we checked if the last and first digit are same, the logic for recursion is that if the 
			fisrt and last digit are same then we remove them both and call the funcion again so this keeps
			repeating till n becomes zero, then the end case condition gets executed provided the if(y==z) condtion
			is true for all times its called.*/
	{
		x=x%(int)pow(10,c-1);//this removes the last digit from the number
		x=x/10;//this removes the first digit of the number
		return(is_palindrome(x));//here we have called the function again thus forming a recursion.
	}
	else//if the above if condition fails even once then it implies that the number is not palindrom and thus we straightaway return 0
		return(0);
}
