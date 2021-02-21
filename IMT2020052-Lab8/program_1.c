#include<stdio.h>
#include<stdlib.h>
int pos=-1;//this global variable keeps track of the top of the stack and initialised as -1 ie empty
int push(int arr[5],int n);
int pop(int arr[5]);
void display(int arr[5]);
int main()
{
	int n,arr[5];
	char choice;//the choice
	int x;
	while(1)//this loops keeps going till we call the display function
	{	scanf("%c",&choice);
		switch(choice)
		{
			case 'a' ://case for pushing the value
				scanf("%d",&n);
				x=push(arr,n);
				break;
			case 'b'://case for popping the value
				x=pop(arr);
				break;
			case 'c'://case for displaying the values
				display(arr);
				x=-1;
				break;
		}
		if(x==-1)//if x=-1 this implies that we exit the program
			exit(0);
	}
	return 0;
}
int push(int arr[5],int n)//for pushing value onto the stack
{
	if(pos==4)//this implies that the stack is full 
	{
		printf("STACK OVERFLOW");
		return -1;
	}
	else
	{
		arr[pos+1]=n;//we put the value of the number in the array
		pos++;//here we update the value of the position of top of the stack
		return 0;
	}
}
int pop(int arr[5])//function for popping the value on stack
{	int temp;
	if(pos==-1)//this implies stack is empty
	{
		printf("STACK UNDERFLOW");
		return -1;
	}
	else
	{	
		temp=arr[pos];
		pos--;//we update the value of the position of top of the stack
		return temp;//returning the value that is popped
	}
}
void display(int arr[5])
{	if(pos==-1)//this means stack is empty
	{
		printf("STACK EMPTY\n");
	}
	for(int i=pos;i>=0;i--)//we print the stack in reverse order according to the position of top of the stack
	{
		printf("%d ",arr[i]);
	}
}