#include<stdio.h>
int main()
{
	int n,grace;
	char c;
	scanf("%c%d",&c,&n);//inputting the class the student got and number of classes missed
	switch(c)//applying switch case on variable c
	{
		case 'f':
			if(n>3)//using if else to assign grace
				grace=0;
			else
				grace=5;
			printf("%d",n*grace);
			break;
		case 's':
			if(n>2)//using if else to assign grace
				grace=0;
			else
				grace=4;
			printf("%d",n*grace);
			break;
		case 't':
			if(n==1)//using if else to assign grace
				grace=5;
			else
				grace=0;
			printf("%d",n*grace);//printing the grace aquired by the student
	
			break;
		        /*default:
			printf("Invalid input");
			break;*/
	}
}


