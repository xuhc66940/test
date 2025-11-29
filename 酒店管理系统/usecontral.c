#define _CRT_SECURE_NO_WARNINGS
#include"totalcontral.h"
#include<stdio.h>
#define FIZESIZEMAX 100024
int main()
{
	Userlist users = creatUser(0, "", "", 0, 0, 0, 0, 0); // 创建链表（酒店管理系统）
	printf("欢迎使用酒店管理系统（链表管理版，制作人：王艺霖）\n");
	printf("============================================================================\n");
	while (1)
	{
		int ch;
		printf("是否对系统进行管理？（1为YES，0为NO）");
		scanf("%d", &ch);
		if (ch == 1)
		{
			printf("请输入以下数据，来进行管理：（输入1为在系统尾部加入一个用户），（输入2为人为查询某一用户），（输入3为人为打印整个用户数据），（输入4为删除指定用户），（输入5为修改指定用户的特定信息）,(输入6为读取保存数据)\n");
			int n;
			printf("请输入您要使用的功能序号：");
			scanf("%d", &n);
			switch (n)
			{
				case 1:printf("请输入该用户的序号：");
					int number;
					char name[20];
					char sex[10];
					int age;
					float phonenumber;
					int roomnumber;
					int roomdata;
					int person;
					scanf("%d", &number);
					printf("请输入该用户的名字：");
					scanf("%s", name);
					printf("请输入该用户的性别：");
					scanf("%s", sex);
					printf("请输入该用户的年龄：");
					scanf("%d", &age);
					printf("请输入该用户的电话号码：");
					scanf("%f", &phonenumber);
					printf("请输入该用户的酒店房间号：");
					scanf("%d", &roomnumber);
					printf("请输入该用户的入住天数：");
					scanf("%d", &roomdata);
					printf("请输入该用户的入住人数：");
					scanf("%d", &person);
					AddBottleUser(users, number, name, sex, age, phonenumber, roomnumber, roomdata, person);
					break;
				case 2:printf("请输入您要查询用户的电话：\n");
					scanf("%f", &phonenumber);
					Find_User(users, phonenumber);
					break;
				case 3:PrintIfAll(users);
					break;
				case 4:printf("请输入您要删除的用户的电话：\n");
					scanf("%f", &phonenumber);
					Delete_User_If(users, phonenumber);
					break;
				case 5:printf("请输入您要修改的用户的电话：\n");
					scanf("%f", &phonenumber);
					Changn_User_IF(users, phonenumber);
					break;
				case 6:
				{
					char FileName[FIZESIZEMAX] = { '\0' };
					printf("请输入读取的文件名称：");
					scanf("%s", FileName, FIZESIZEMAX - 1);
					ReadIf(FileName,users);
				}
			}
		}
		else
		{
			printf("感谢您的使用，如果您认为不错，请给个高分（> . <)\n");
			break;
		}
	}
	printf("是否保存数据？\n");
	int n;
	scanf("%d", &n);
	if (n == 1)
	{
		char FileName[FIZESIZEMAX] = { '\0' };
		printf("请输入保存的文件名称：");
		scanf("%s", FileName, FIZESIZEMAX - 1);
		SaveIf(users, FileName);
		printf("保存成功！\n");
	}
	else
	{
		return 0;
	}
}