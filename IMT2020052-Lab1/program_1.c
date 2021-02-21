#include<stdio.h>
//a program that takes a temperature reading in centigrade scale and outputs its equivalent value in fahrenheit scale
int main()
{
	float c,t;// 2 variables representing temperature in centigrade and fahrenheit
	scanf("%f",&c);//for inputting the temperature in centigrade
	t=(9*c)/5+32;//converting centigrade to fahrenheit and assigning its value to "t"
	printf("%.2f",t);//using float precision,printing the temperature in fahrenheit upto 2 decimal places
	return 0;
}	
