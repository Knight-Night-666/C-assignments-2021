#include<stdio.h>
void who_wins(int coins,int who_start);
int main()
{	int n,id;
	scanf("%d%d",&n,&id);
	who_wins(n,id);
	return 0;
}
/* for 1 coins --> who picks the coin first will win the game
   for 2 coins--> who pciks the coin first will win the game because he will pick all the 2 coins
   for 3 coins--> if the first person chooses 1 cpoin then the 2nd will choose 2 and win or 1st chooses 2 coins then 1st will choose 1 and win
   for 4 coins--> since all players play optimally the first person will choose 1 and now 3 coins are left now 2ns starts and since in 3 coins 
   				  person who start loses so 1st will win
   for 5 coins--> since all players play optimally the first person will choose 2 and now 3 coins are left now 2ns starts and since in 3 coins 
   				  person who start loses so 1st will win
   for 6 coins--> since all players play optimally if first person will chose 1 and now 2nd will have option of choosing 4 and 2 but since he also wants to win
   				  so he will choose 2 and now we have 3 coins left and we know that since its 1st;s turn and who starts always loses so 2nd player wins */
void who_wins(int coins,int who_start)
{
	if(coins%3==0)/*by defining the cases till n=10 we can clearly see a pattern that whenever the number of cpoins is divisible by 3
				    then the person who starts the game always loses*/
	{
		if(who_start==1)
			printf("Ravi\n");
		else
			printf("Rinku\n");
	}
	else//when the number of coins is not the multiple of 3 then the person who starts the game always wins
	{
		if(who_start==2)
			printf("Ravi\n");
		else
			printf("Rinku\n");
	}
}