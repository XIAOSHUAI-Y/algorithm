#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>


#define LSIZE 60
#define WSIZE 25

int grade = 0;//����
int speedSnake = 300;//�����ٶ�
struct snakeAddress//�ߵ�λ������
{
	int x;
	int y;
};

struct Snake
{
	struct snakeAddress snakeHead[1200];//��ͷ
	int snakeSize;//������ĳ���
}s,temps;

struct snakeFood
{
	int x1;//ʳ�������
	int y1;
}f;

enum moveDir//ö��
{
	top = 'W', bottom = 'S', left = 'A', right = 'D'
};

//��ʼ����
void initSnake()
{
	s.snakeHead[0].y = WSIZE / 2;
	s.snakeHead[0].x = LSIZE / 2;

	s.snakeHead[1].y = WSIZE / 2;
	s.snakeHead[1].x = LSIZE / 2 + 1;
	s.snakeSize = 2;
}
//��ʼ��ʳ��
void initfood()
{
	f.x1 = rand() % (LSIZE-2)+1;
	f.y1 = rand() % (WSIZE-2)+1;
}

//�����ʼ��
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
	//��ʼ����ͷ������
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

	//��ʼ����β������
	
	coord.X = temps.snakeHead[temps.snakeSize - 1].x;
	coord.Y = temps.snakeHead[temps.snakeSize - 1].y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
	

	//����ʳ�������
	coord.X = f.x1 - 1;
	coord.Y = f.y1 - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	printf("#");

	//��ʼ��������Ĺ��

	coord.X = LSIZE;
	coord.Y = WSIZE;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	printf("\n");
}

void controlSnake()
{
	char ch = 'A';
	//����ͷ��ǽ���Ƿ���ײ��Ϊ����
	while (s.snakeHead[0].x < LSIZE && s.snakeHead[0].x > 0 && s.snakeHead[0].y < WSIZE && s.snakeHead[0].y > 0)
	{
		temps = s;

		initCursor();//��������
		//initScreen();//
		//��ͷ��������ײ
		for (int i = 1; i < s.snakeSize; i++)
		{
			if (s.snakeHead[0].x == s.snakeHead[i].x && s.snakeHead[0].y == s.snakeHead[i].y)
				return;
		}
		//������ʳ���ʱ��
		if (s.snakeHead[0].x == (f.x1-1) && s.snakeHead[0].y == (f.y1-1))
		{
			s.snakeSize++;//��������
			initfood();//�����µ�ʳ�� 
			grade += 10;//�÷�����
			speedSnake -= 30;//�ٶ�
		}

		//�ƶ��ߵ�λ��
		if(_kbhit())
			ch = _getch();
		
		switch (ch)//�߽����ƶ��������ߺ�ʳ������ض���
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
//��ʾ�÷�
void printfGrade()
{
	printf("%d\n\n\n", grade);
}


int main()
{
	//ȥ�����
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = sizeof(cci);
	cci.dwSize = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci); 
	srand((unsigned int)time(NULL));//�������������


	initScreen();//��ʼ��
	initSnake();//��ʼ����
	initfood();//��ʼ��ʳ��
	//initSnakeCursor();//
	//initfoodCursor();
	initCursor();//��ʼ�����
	controlSnake();//����
	//pritnf("%d,%d\n", s.snakeHead[0].x, s.snakeHead[0].x);
	printfGrade();//��ʾ�÷�
	//initendCursor();
	system("pause");
	return 0;
}

