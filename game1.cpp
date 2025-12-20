#define _CRT_SECURE_NO_WARNINGS
#include<graphics.h>
#include<stdio.h>
#include<time.h>
#define N 5
int Map[N]; //定义黑块
int MapX, MapY,Score = 0;

void InitBlack()
{
	for (int i = 0; i < N - 1; i++)
	{
		Map[i] = rand() % N; // 0 ~4
		printf("%d\n",Map[i]);  //显示在每一行的第几 + 1个位置
	}
}

void DrawBlack() //随机产生黑块
{
	for (int i = 0; i < N - 1; i++)
	{
		fillrectangle(100 * Map[i], i * 120, 100 + 100 * Map[i], 120 + 120 * i);
	}
}

void Draw()   //绘制界面
{
	BeginBatchDraw();
	cleardevice(); //清屏
	setlinecolor(BLACK);//绘制线条
	setfillcolor(WHITE);//填充为白色
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			fillrectangle(100 * j, i * 120, 100 + 100 * j, 120 + 120 * i);//4行，5列,给绘制白块；
		}
	}
	setfillcolor(BLACK); 
	DrawBlack(); //绘制黑色的方块
	EndBatchDraw();
}

bool Play()
{
	MOUSEMSG msg;
	msg = GetMouseMsg(); //捕获鼠标消息
	switch (msg.uMsg)
	{
		case WM_LBUTTONDOWN:
			MapX = msg.x / 100;
			MapY = msg.y / 120;
			if (Map[3] == MapX && MapY == 3)
			{
				for (int i = 3; i > 0; i--)
				{
					Map[i] = Map[i - 1];
				}
				Map[0] = rand() % N;
				Score += 10;
				printf("您点击到了黑块!\n");
			}
			else
			{
				printf("未点击到黑块!\n");
				return true;
			}
			break;
	}
	return false;
}

int main()
{	
	srand((unsigned)time(NULL)); //随机产生种子
	initgraph(500,480); //创建界面
	InitBlack(); //初始化黑格子
	while (1)
	{
		Draw(); //绘制界面
		if (Play())
		{
			char str[128];
			sprintf(str, "总计消除格子：%d个，总得分：%d",Score / 10,Score);
			MessageBox(GetHWnd(),str,"Game Over",MB_OK);
			exit(0); //结束程序
		}
	}
	getchar();  //卡屏；
	return 0;
}