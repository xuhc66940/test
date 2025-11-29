#ifndef User_H
#define User_H
typedef struct User
{
	int number;
	char name[20];
	char sex[10];
	int age;
	float phonenumber;
	int roomnumber;
	int roomdata;
	int person;
	struct user* next;
}User;
typedef User* Userlist;
//创建链表（系统）
User* creatUser(int number, char* name, char* sex, int age, float phonenumber, int roomnumber, int roomdata, int person);
//尾部插入用户
void AddBottleUser(Userlist users, int number, char* name, char* sex, int age, float phonenumber, int roomnumber, int roomdata, int person);
//打印所以用户的信息
void PrintIfAll(Userlist users);
//查询用户信息，通过电话
void Find_User(Userlist users, float phonenumber);
//删除用户,通过电话
void Delete_User_If(Userlist users, float phonenumber);
//修改用户信息,通过电话
void Changn_User_IF(Userlist users, float phonenumber);
//保存数据
void SaveIf(Userlist users, char* SaveFileName);
//读取数据
void ReadIf(char* FileName,Userlist users);


#endif



