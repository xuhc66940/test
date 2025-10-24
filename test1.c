#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int profit = 0;
	int bonus = 0;
	int bonus1 = 10000;
	int bonus2 = bonus1 + 1e5 * 0.075;
	int bonus3 = bonus2 + 2e5 * 0.05;
	int bonus4 = bonus3 + 2e5 * 0.03;
	int bonus5 = bonus4 + 4e5 * 0.015;
	printf("请输入利润：");
	scanf("%d",&profit);

	if ( profit <= 1e5 )
	{
		bonus = profit * 0.1;
		printf("bonus= %d\n",bonus);
	}
	else if (profit < 2e5)
	{
		bonus = (profit - 1e5) * 0.075 + bonus1;
		printf("bonus= %d\n", bonus);
	}
	else if (profit < 4e5)
	{
		bonus = (profit - 2e5) * 0.05 +bonus2;
		printf("bonus= %d\n", bonus);
	}
	else if (profit < 6e5)
	{
		bonus = (profit - 4e5)*0.03 +  bonus3;
		printf("bonus= %d\n", bonus);
	}
	else if (profit < 1e6)
	{
		bonus =(profit - 6e5)*0.015+bonus4;
		printf("bonus= %d\n", bonus);
	}
	else
	{
		bonus =(profit - 1e6)*0.01+ bonus5;
		printf("bonus= %d\n", bonus);
	}
	int sum;
	sum = profit + bonus;
	printf("总值是%d\n",sum);
	
	return 0;
}