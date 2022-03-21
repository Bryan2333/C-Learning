#include <stdio.h>

int main(void){
	int audA, audB; /*定义观众*/
	int pro1, pro2, pro3; /*定义每位评委的投票*/
	int proA = 0, proB = 0; /*定义选手的评委得票*/
	scanf("%d%d%d%d%d", &audA, &audB, &pro1, &pro2, &pro3);
	if(pro1 == 0)
	{
		proA = proA + 1;
	}
	else if(pro1 == 1)
	{
		proB = proB + 1;
	}
	if(pro2 == 0)
	{
		proA = proA + 1;
	}
	else if(pro1 == 1)
	{
		proB = proB + 1;
	}
	if(pro3 == 0)
	{
		proA = proA + 1;
	}
	else if(pro3 == 1)
	{
		proB = proB + 1;
	}
	int Atotal = audA + proA;
	int Btotal = audB + proB;
	if(Atotal > Btotal)
	{
		if(proA != 0)
		{
			printf("The winner is a: %d + %d", audA, proA);
		}
		else
		{
			printf("The winner is b: %d + %d", audB, proB);
		}
	}
	else 
	{
		if(proB != 0)
		{
			printf("The winner is b: %d + %d", audB, proB);	
		}
		else
		{
			printf("The winner is a: %d + %d", audA, proA);
		}
	}
	return 0;
}