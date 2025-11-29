#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"totalcontral.h"

User* creatUser(int number, char* name, char* sex, int age, float phonenumber, int roomnumber, int roomdata, int person)
{

	User* newUser = (User*)malloc(sizeof(User));
	if (newUser == NULL)
	{
		printf("申请失败，请退出系统，查看代码\n");
		return NULL;
	}
	if (name != NULL)
	{
		strcpy(newUser->name, name);
		strcpy(newUser->sex, sex);
	}
	newUser->number = number;
	newUser->age = age;
	newUser->phonenumber = phonenumber;
	newUser->roomnumber = roomnumber;
	newUser->roomdata = roomdata;
	newUser->person = person;
	newUser->next = NULL;
	return newUser;
}
void AddBottleUser(Userlist users, int number, char* name, char* sex, int age, float phonenumber, int roomnumber, int roomdata, int person)
{
	while (users->next != NULL)
	{
		users = users->next;
	}
	User* newUser = creatUser(number, name, sex, age, phonenumber, roomnumber, roomdata, person);
	users->next = newUser;
	printf("%s用户在尾部添加成功！\n", name);
	printf("以下为%s的信息，请核对：\n", name);
	printf("序号：NO.%d  ,  姓名：%s  ，性别：%s  ,年龄： %d ,  电话号码：%11.0f  ,  房间号：%d  ，  入住天数：%d天  , 入住人数：%d  \n ", number, name, sex, age, phonenumber, roomnumber, roomdata, person);
	return;
}
void PrintIfAll(Userlist users)
{
	if (users->next == NULL)
	{
		printf("该系统未录入任何用户！\n");
		return;
	}
	printf("以下为所有用户的数据信息：\n");
	while (users->next != NULL)
	{
		users = users->next;
		printf("序号：NO.%d  ,  姓名：%s  ，性别：%s  ,年龄： %d ,  电话号码：%11.0f  ,  房间号：%d  ，  入住天数：%d天 , 入住人数：%d  \n ", users->number, users->name, users->sex, users->age, users->phonenumber, users->roomnumber, users->roomdata, users->person);
	}
}

void Find_User(Userlist users, float phonenumber)
{
	if (users->next == NULL)
	{
		printf("空表！\n");
		return;
	}
	while (users->next != NULL)
	{
		users = users->next;
		if (users->phonenumber == phonenumber)
		{
			printf("查询到了电话号码为%11.0f的用户，以下为该用户的全部信息：\n", phonenumber);
			printf("序号：NO.%d  ,  姓名：%s  ，性别：%s  ,年龄： %d ,  电话号码：%11.0f  ,  房间号：%d  ，  入住天数：%d天 , 入住人数：%d  \n ", users->number, users->name, users->sex, users->age, users->phonenumber, users->roomnumber, users->roomdata, users->person);
			return;
		}

	}
	printf("没有找到有关该用户的信息！");
}

void Delete_User_If(Userlist users, float phonenumber)
{
	if (users->next == NULL)
	{
		printf("该系统未录入用户数据！\n");
		return;
	}
	//处理第一个用户
	if (users->phonenumber == phonenumber)
	{
		Userlist headUser = users->next;
		free(users);
		users = headUser;
		return;
	}
	Userlist prev = users;
	Userlist DER = users->next;
	Userlist DelUser = NULL;
	while (DER)
	{
		if (DER->phonenumber == phonenumber)
		{
			printf("用户：%s已被删除\n", DER->name);
			prev->next = DER->next;
			DelUser = DER;
		}
		else
		{
			prev = DER;
		}
		if (DelUser)
		{
			free(DelUser);
			DelUser = NULL;
			DER = prev;
		}
		DER = DER->next;
	}
}

void Changn_User_IF(Userlist users, float phonenumber)
{
	if (users->next == NULL)
	{
		printf("该系统未录入用户数据！\n");
		return;
	}
	users = users->next;
	while (users != NULL)
	{
		if (users->phonenumber == phonenumber)
		{
			printf("查询到了该用户：%s\n", users->name);
			printf("请给出你要修改的内容：(输入1为修改该客户的序号)，（输入2为改变该用户电话），（输入3为改变该用户的房间号），（输入4为改变该用户的入住天数）,（输入5为改变该用户的入住人数）\n");
			int n = 0;
			scanf("%d", &n);
			switch (n)
			{
			case 1:printf("请输入新的序号：");
				int j;
				scanf("%d", &j);
				users->number = j;
				break;
			case 2:printf("请输入新的电话：");
				float newphonenumber;
				scanf("%f", &newphonenumber);
				users->phonenumber = newphonenumber;
				break;
			case 3:printf("请输入新的房间号：");
				scanf("%d", &j);
				users->roomnumber = j;
				break;
			case 4:printf("请输入新的入住天数：");
				scanf("%d", &j);
				users->roomdata = j;
				break;
			case 5:printf("请输入新的入住人数：");
				scanf("%d", &j);
				users->person = j;
				break;
			}
			printf("修改后，该客户的新数据：序号：NO.%d  ,  姓名：%s  ，性别：%s  ,年龄： %d ,  电话号码：%11.0f  ,  房间号：%d  ，  入住天数：%d天 , 入住人数：%d  \n ", users->number, users->name, users->sex, users->age, users->phonenumber, users->roomnumber, users->roomdata, users->person);
			return;
		}
		users = users->next;
	}
}
void SaveIf(Userlist users,char * SaveFileName)
{
	if (users == NULL)
	{
		printf("为空表!\n");
		return;
	}

	FILE* file = NULL;
	fopen_s(&file, SaveFileName, "w");
	Userlist temp = users->next;
	do
	{
		fprintf(file, "%d %s %s %d %f %d %d %d\n", temp->number, temp->name, temp->sex, temp->age, temp->phonenumber, temp->roomnumber, temp->roomdata, temp->person);
		temp = temp->next;
	} while (temp != NULL);
	fclose(file);
}

void ReadIf( char* FileName,Userlist users)
{
	FILE* fp = NULL;
	fopen_s(&fp,FileName,"r");
	if (fp == NULL)
	{
		printf("打开文件失败！\n");
		return;
	}
	int number;
	char name[20];
	char sex[10];
	int age;
	float phonenumber;
	int roomnumber;
	int roomdata;
	int person;
	while (fscanf(fp, "%d %s %s %d %f %d %d %d\n", &number, name, sex, &age, &phonenumber, &roomnumber, &roomdata, &person) != EOF)
	{
		AddBottleUser(users, number, name, sex, age, phonenumber, roomnumber, roomdata, person);
	}
	
	fclose(fp);
}

