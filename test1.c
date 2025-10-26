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

int main()
{
	int arr[10] = { 10,2,8,22,16,4,10,6,14,20 };
	int a, b, c, d, e, f, g, h, i, j;
	int count = 0;
	while (1)
	{
		for (int n = 0; n < 10; n++)
		{
			if (arr[n] % 2 == 1)
			{
				arr[n]++;
			}
		}
		a = arr[0];
		b = arr[1];
		c = arr[2];
		d = arr[3];
		e = arr[4];
		f = arr[5];
		g = arr[6];
		h = arr[7];
		i = arr[8];
		j = arr[9];
		for (int i = 0; i < 10; i++)
		{
			arr[i] = arr[i] / 2;
		}
		arr[0] = j / 2 + a / 2;
		arr[1] = a / 2 + b / 2;
		arr[2] = b / 2 + c / 2;
		arr[3] = c / 2 + d / 2;
		arr[4] = d / 2 + e / 2;
		arr[5] = e / 2 + f / 2;
		arr[6] = f / 2 + g / 2;
		arr[7] = g / 2 + h / 2;
		arr[8] = h / 2 + i / 2;
		arr[9] = j / 2 + i / 2;
		count++;
		if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3] && arr[3] == arr[4] && arr[4] == arr[5] && arr[5] == arr[6] && arr[6] == arr[7] && arr[7] == arr[8] && arr[8] == arr[9] && arr[9] == arr[0])
		{
			break;
		}
	}
	printf("%d\n", count);
	printf("%d.%d,%d,%d\n", arr[0], arr[1], arr[2], arr[3]);
	return 0;
}