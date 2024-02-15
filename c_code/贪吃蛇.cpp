#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>


#define LSIZE 60
#define WSIZE 25

int grade = 0;//分数
int speedSnake = 300;//控制速度
struct snakeAddress//蛇的位置坐标
{
	int x;
	int y;
};

struct Snake
{
	struct snakeAddress snakeHead[1200];//蛇头
	int snakeSize;//蛇身体的长度
}s,temps;

struct snakeFood
{
	int x1;//食物的坐标
	int y1;
}f;

enum moveDir//枚举
{
	top = 'W', bottom = 'S', left = 'A', right = 'D'
};

//初始化蛇
void initSnake()
{
	s.snakeHead[0].y = WSIZE / 2;
	s.snakeHead[0].x = LSIZE / 2;

	s.snakeHead[1].y = WSIZE / 2;
	s.snakeHead[1].x = LSIZE / 2 + 1;
	s.snakeSize = 2;
}
//初始化食物
void initfood()
{
	f.x1 = rand() % (LSIZE-2)+1;
	f.y1 = rand() % (WSIZE-2)+1;
}

//界面初始化
void initScreen()
{
	for (int i = 0; i <= WSIZE; i++)
	{
		for (int j = 0; j <= LSIZE; j++)
		{
			if (i == 0 || i == WSIZE)
				printf("_");
			else if (j == 0 || j == LSIZE)
				printf("|");
			else
				putchar(' ');
		}
		printf("\n");
	}
}


void initCursor()
{
	//初始化蛇头的坐标
	COORD coord;

	for (int i = 0; i < s.snakeSize; i++)
	{
		coord.X = s.snakeHead[i].x;
		coord.Y = s.snakeHead[i].y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if (i == 0)
			putchar('@');
		else
			putchar('*');
	}

	//初始化蛇尾的坐标
	
	coord.X = temps.snakeHead[temps.snakeSize - 1].x;
	coord.Y = temps.snakeHead[temps.snakeSize - 1].y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
	

	//生成食物的坐标
	coord.X = f.x1 - 1;
	coord.Y = f.y1 - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	printf("#");

	//初始化结束后的光标

	coord.X = LSIZE;
	coord.Y = WSIZE;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	printf("\n");
}

void controlSnake()
{
	char ch = 'A';
	//以蛇头和墙壁是否碰撞作为条件
	while (s.snakeHead[0].x < LSIZE && s.snakeHead[0].x > 0 && s.snakeHead[0].y < WSIZE && s.snakeHead[0].y > 0)
	{
		temps = s;

		initCursor();//更新坐标
		//initScreen();//
		//蛇头和身体碰撞
		for (int i = 1; i < s.snakeSize; i++)
		{
			if (s.snakeHead[0].x == s.snakeHead[i].x && s.snakeHead[0].y == s.snakeHead[i].y)
				return;
		}
		//蛇遇到食物的时候
		if (s.snakeHead[0].x == (f.x1-1) && s.snakeHead[0].y == (f.y1-1))
		{
			s.snakeSize++;//蛇身增长
			initfood();//产生新的食物 
			grade += 10;//得分增加
			speedSnake -= 30;//速度
		}

		//移动蛇的位置
		if(_kbhit())
			ch = _getch();
		
		switch (ch)//蛇进行移动，并对蛇和食物进行重定义
		{
		case top:
			s.snakeHead[0].y -= 1;
			for (int i = 1; i < s.snakeSize; i++)
			{
				s.snakeHead[i] = temps.snakeHead[i - 1];
			}
			break;
		case bottom:
			s.snakeHead[0].y += 1;
			for (int i = 1; i < s.snakeSize; i++)
			{
				s.snakeHead[i] = temps.snakeHead[i - 1];
			}
			break;
		case left:
			s.snakeHead[0].x -= 1;
			for (int i = 1; i < s.snakeSize; i++)
			{
				s.snakeHead[i] = temps.snakeHead[i - 1];
			}
			break;
		case right:
			s.snakeHead[0].x += 1;
			for (int i = 1; i < s.snakeSize; i++)
			{
				s.snakeHead[i] = temps.snakeHead[i - 1];
			}
			break;
		default:
			break;
		}

		Sleep(speedSnake);
	}
}
//显示得分
void printfGrade()
{
	printf("%d\n\n\n", grade);
}


int main()
{
	//去除光标
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = sizeof(cci);
	cci.dwSize = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci); 
	srand((unsigned int)time(NULL));//导入随机数种子


	initScreen();//初始化
	initSnake();//初始化蛇
	initfood();//初始化食物
	//initSnakeCursor();//
	//initfoodCursor();
	initCursor();//初始化光标
	controlSnake();//控制
	//pritnf("%d,%d\n", s.snakeHead[0].x, s.snakeHead[0].x);
	printfGrade();//显示得分
	//initendCursor();
	system("pause");
	return 0;
}

