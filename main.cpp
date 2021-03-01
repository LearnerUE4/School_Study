//#include <vector>
//#include <graphics.h>
// #include "unit.h"
// #include "food.h"
// #include "root.h"
// #include "snake.h"
// #include "Wall.h"

#include "control.h"
using namespace std;

//class Rule		//Create Game Rule
//{
//	
//public:
//	HWND hwnd = NULL;	//窗口句柄
//	static void GameWindows()	//setting game's windows
//	{
//		initgraph(800, 600);	//windows's size
//		cleardevice();
//		_getch();
//		closegraph();
//
//	}
//	
//	
//
//protected:
//private:
//};

//class Root
//{
//public:
//
//	void CreatPoint(int x,int y)
//	{
//		rectangle(x, y, x + 10, y + 10);
//		setfillcolor(WHITE);
//		circle(200, 200, 100);
//		fillrectangle(x, y,x+10,y+10);
//		cleardevice();
//		
//	}
//protected:
//private:
//};
//class Snake:Root
//{
//public:
//	Snake();
//	~Snake();
//	int Speed=25;
//	int length;
//	char position;
//	void CreatPoint();
//	enum position
//	{
//		up,down,left,right
//	};
//	void Move()
//	{
//		
//	}
//private:
//
//};
//void showFood(int x,int y)
//{
//	Snake sn;
//	srand((int)time(0));
//	x = 5 + rand() % (40 - 5);
//	y = 5 + rand() % (20 - 5);
//	COORD pos = { x,y };
//	HANDLE hOut;
//	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleCursorPosition(hOut, pos);
//	cout << "☆" << endl;
//}
//void RunGame()
//{
//	int x = 40;
//	int y = 50;
//	Unit un;
//	//un.show(80, 20);
//	un.show(60, 10);
//	Snake sn;
//	cout << "分数：" << sn.grade;
//	//un.show(5, 100, "贪吃蛇游玩规则：wsad键移动，吃一个食物+1分，每吃5个食物速度+1",0.0);
//
//	Root ro;
//	ro.HideCursor();
//	ro.draw(5, 5, 40, 5);
//	ro.draw(5, 5, 5, 20);
//	ro.draw(50, 5, 50, 20);
//	ro.draw(5, 20, 40, 20);
//	ro.draw(74, 5, 74, 20);
//
//// 	extern Wall wa;
//// 	wa.drawWall();
//
//	//extern Food fo;
//	fo.showFood();
//	Food* f = &fo;
//// 	int a = 40, b = 12;
//// 	fo.showFood(a, b);
//
//	
//	sn.Init();
//
//	int* sp=nullptr;
//	sp = &sn.speed;
//	while (true)
//	{
//		char pause = ' ';
//		if (((GetAsyncKeyState(pause) & 0x8000) ? 1 : 0))
//		{
//			int x = ::MessageBox(NULL, TEXT("游戏暂停，是否继续？"), TEXT("游戏暂停"), 0);
//
//		}
//		sn.Move();
//		//sn.IsEat();
//		if (sn.IsEat(f))
//		{
//			fo.destoryFood();
//			fo.showFood();
//			un.show(60, 10, "分数:", sn.grade);
//			
//			if (sn.grade % 5 ==0)
//			{
//				sn.speed++;
//				un.show(60, 20, "速度:", sn.speed);
//			}
//			
//		}
//// 		if (sn.HitItself())
//// 		{
//// 			MessageBox(NULL, TEXT("游戏结束，吃到了自己"), TEXT("游戏结束"), 0);
//// 			system("cls");
//// 			RunGame();
//// 		}
//		if (sn.OverBorder())
//		{
//			MessageBox(NULL, TEXT("游戏结束，撞墙了"), TEXT("游戏结束"), 0);
//			system("cls");
//			RunGame();
//		}
//		Sleep(1000/(*sp));
//	}
//}

int main()
{
	//cout << "请输入窗口需要的宽度：" << endl;
	//cin >> Width;
	//cout << "请输入窗口需要的高度：" << endl;
	//cin >> Height;
	//
	////Rule rule;
	////rule.GameWindows();
	////Root root;
	////root.CreatPoint(10,10);
	//initgraph(Width, Height);
	//
	//rectangle(Width/2-5, Height/2-5, Width/2+5, Height / 2 +5);
	//setfillcolor(WHITE);
	//_getch();
	//closegraph();
	Control cont;
	cont.runGame();
	
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

//#include<iostream.h>
//#include<cstdlib>//该函数主要可以提供一些函数与符号常量
//#include<algorithm>//提供大量基于迭代器的非成员模版函数
//#include<conio.h>//其中定义了通过控制台进行数据输入和数据输出的函数
//#include<time.h>//日期和时间头文件
//#include<windows.h>
//#define ML 100   
//using namespace std;
//class Snake    //声明一个类Snake
//{
//public:
//	int head, tail, body[200], length;
//};
//Snake T;			  //定义一个对象T
//int map[100][100];   	//定义一个整形的二维数组做标记用
//char maze[100][100];	//根据map数组的不同数值显示不同符号，以此绘图
//void init()			//初始化函数
//{
//	T.head = 3;
//	T.tail = 0;
//	//	T.length=0;
//	memset(T.body, 0, sizeof(T.body));
//}
//int card[800];
//char order;		//接收指令
//int getnum()
//{
//	static int n = 0;
//	n++;
//	n = n % 800;
//	return card[n];
//}
//
//void up()
//{
//	int sum, i;
//	sum = T.body[(T.head - 1 + ML) % ML] - 100;
//	if (map[sum / 100][sum % 100] == 1)
//	{
//		T.length++;
//		T.body[T.head++] = sum;
//		T.head %= ML;
//		map[sum / 100][sum % 100] = 0;
//		for (i = T.tail; i != T.head;)
//		{
//			sum = T.body[i];
//			map[sum / 100][sum % 100] = -1;
//			i++;
//			i %= ML;
//		}
//		while (1)
//		{
//			sum = getnum();
//			if (map[sum / 100][sum % 100] == 0)
//			{
//				map[sum / 100][sum % 100] = 1;
//				break;
//			}
//		}
//		for (i = T.tail; i != T.head;)
//		{
//			sum = T.body[i];
//			map[sum / 100][sum % 100] = 0;
//			i++;
//			i %= ML;
//		}
//	}
//	else
//	{
//		T.body[T.head++] = sum;
//		T.head %= ML;
//		T.tail = (++T.tail) % ML;
//	}
//}
//void down()
//{
//	int sum, i;
//	sum = T.body[(T.head - 1 + ML) % ML] + 100;
//	if (map[sum / 100][sum % 100] == 1)
//	{
//		T.length++;
//		T.body[T.head++] = sum;
//		T.head %= ML;
//		map[sum / 100][sum % 100] = 0;
//		for (i = T.tail; i != T.head;)
//		{
//			sum = T.body[i];
//			map[sum / 100][sum % 100] = -1;
//			i++;
//			i %= ML;
//		}
//		while (1)
//		{
//			sum = getnum();
//			if (map[sum / 100][sum % 100] == 0)
//			{
//				map[sum / 100][sum % 100] = 1;
//				break;
//			}
//		}
//		for (i = T.tail; i != T.head;)
//		{
//			sum = T.body[i];
//			map[sum / 100][sum % 100] = 0;
//			i++;
//			i %= ML;
//		}
//	}
//	else
//	{
//		T.body[T.head++] = sum;
//		T.head %= ML;
//		T.tail = (++T.tail) % ML;
//	}
//}
//void right()
//{
//	int sum, i;
//	sum = T.body[(T.head - 1 + ML) % ML] + 1;
//	if (map[sum / 100][sum % 100] == 1)
//	{
//		T.length++;
//		T.body[T.head++] = sum;
//		T.head %= ML;
//		map[sum / 100][sum % 100] = 0;
//		for (i = T.tail; i != T.head;)
//		{
//			sum = T.body[i];
//			map[sum / 100][sum % 100] = -1;
//			i++;
//			i %= ML;
//		}
//		while (1)
//		{
//			sum = getnum();
//			if (map[sum / 100][sum % 100] == 0)
//			{
//				map[sum / 100][sum % 100] = 1;
//				break;
//			}
//		}
//		for (i = T.tail; i != T.head;)
//		{
//			sum = T.body[i];
//			map[sum / 100][sum % 100] = 0;
//			i++;
//			i %= ML;
//		}
//	}
//	else
//	{
//		T.body[T.head++] = sum;
//		T.head %= ML;
//		T.tail = (++T.tail) % ML;
//	}
//}
//void left()
//{
//	int sum, i;
//	sum = T.body[(T.head - 1 + ML) % ML] - 1;
//	if (map[sum / 100][sum % 100] == 1)
//	{
//		T.length++;
//		T.body[T.head++] = sum;
//		T.head %= ML;
//		map[sum / 100][sum % 100] = 0;
//		for (i = T.tail; i != T.head;)
//		{
//			sum = T.body[i];
//			map[sum / 100][sum % 100] = -1;
//			i++;
//			i %= ML;
//		}
//		while (1)
//		{
//			sum = getnum();
//			if (map[sum / 100][sum % 100] == 0)
//			{
//				map[sum / 100][sum % 100] = 1;
//				break;
//			}
//		}
//		for (i = T.tail; i != T.head;)
//		{
//			sum = T.body[i];
//			map[sum / 100][sum % 100] = 0;
//			i++;
//			i %= ML;
//		}
//	}
//	else
//	{
//		T.body[T.head++] = sum;
//		T.head %= ML;
//		T.tail = (++T.tail) % ML;
//	}
//}
//int main()
//{
//	memset(map, 0, sizeof(map));
//	memset(maze, ' ', sizeof(maze));
//	int i, j, sum = 0, k = 0, temp;
//	for (i = 1; i < 20; i++)
//		for (j = 1; j < 40; j++)
//		{
//			card[k++] = i * 100 + j;
//		}
//	srand(time(0));
//	temp = rand() % 10 + 1;
//	while (temp--)
//		random_shuffle(card, card + 19 * 39);
//	for (i = 0; i <= 40; i++)
//		map[i][0] = map[20][i] = map[i][40] = map[0][i] = -1;
//	init();
//	T.length = 1;
//	T.body[T.head++] = 101;
//	T.head %= ML;
//
//	sum = getnum();
//	map[sum / 100][sum % 100] = 1;
//
//	char jud = 'd';
//	int TM = 300, start;
//	while (1)
//	{
//		(TM > 100) ? (TM = 300 - T.length * 60) : (TM = 50);
//		start = clock();
//		//利用临时无穷循环制作刷屏时间
//		while (clock() - start <= TM && !kbhit())           //kbhit() 检查当前是否有键盘输入，若有则返回一个非0值，否则返回0
//		{
//			;
//		}
//		if (kbhit() && (order = getch(), order == 'w' || order == 's' || order == 'a' || order == 'd'))
//		{
//
//			sum = T.body[(T.head - 1 + ML) % ML];
//			system("CLS");
//			for (i = T.tail; i != T.head;)
//			{
//				temp = T.body[i];
//				map[temp / 100][temp % 100] = -1;
//				i++;
//				i %= ML;
//			}
//			if (order == 'w')
//			{
//				jud = order;
//				//cout<<"-->w\n";
//				if (map[sum / 100 - 1][sum % 100] != -1)
//				{
//					for (i = T.tail; i != T.head;)
//					{
//						temp = T.body[i];
//						map[temp / 100][temp % 100] = 0;
//						i++;
//						i %= ML;
//					}
//					up();
//				}
//				else
//				{
//					system("CLS");
//					cout << "============================================" << endl;
//					cout << "       很遗憾，你输了!!!最后得分为:" << T.length * 10 - 10 << endl;
//					cout << "============================================" << endl;
//					break;
//				}
//
//			}
//			else if (order == 'a')
//			{
//				jud = order;
//				//cout<<"-->a\n";
//				if (map[sum / 100][sum % 100 - 1] != -1)
//				{
//					for (i = T.tail; i != T.head;)
//					{
//						temp = T.body[i];
//						map[temp / 100][temp % 100] = 0;
//						i++;
//						i %= ML;
//					}
//					left();
//				}
//				else
//				{
//					system("CLS");
//					cout << "============================================" << endl;
//					cout << "       很遗憾，你输了!!!最后得分为:" << T.length * 10 - 10 << endl;
//					cout << "============================================" << endl;
//					break;
//				}
//			}
//			else if (order == 's')
//			{
//				jud = order;
//				//cout<<"-->s\n";
//				if (map[sum / 100 + 1][sum % 100] != -1)
//				{
//					for (i = T.tail; i != T.head;)
//					{
//						temp = T.body[i];
//						map[temp / 100][temp % 100] = 0;
//						i++;
//						i %= ML;
//					}
//					down();
//				}
//				else
//				{
//					system("CLS");
//					cout << "============================================" << endl;
//					cout << "       很遗憾，你输了!!!最后得分为:" << T.length * 10 - 10 << endl;
//					cout << "============================================" << endl;
//					break;
//				}
//			}
//			else if (order == 'd')
//			{
//				jud = order;
//				//cout<<"-->d\n";
//				if (map[sum / 100][sum % 100 + 1] != -1)
//				{
//					for (i = T.tail; i != T.head;)
//					{
//						temp = T.body[i];
//						map[temp / 100][temp % 100] = 0;
//						i++;
//						i %= ML;
//					}
//					right();
//				}
//				else
//				{
//					system("CLS");
//					cout << "============================================" << endl;
//					cout << "       很遗憾，你输了!!!最后得分为:" << T.length * 10 - 10 << endl;
//					cout << "============================================" << endl;
//					break;
//				}
//			}
//			memset(maze, ' ', sizeof(maze));
//			for (i = 0; i <= 20; i++)
//				for (j = 0; j <= 40; j++)
//				{
//					if (map[i][j] == -1)
//						maze[i][j] = '#';
//					else if (map[i][j] == 1)
//						maze[i][j] = 'o';
//				}
//			for (i = T.tail; i != T.head;)
//			{
//				sum = T.body[i];
//				maze[sum / 100][sum % 100] = '*';
//				++i;
//				i %= ML;
//			}
//			sum = T.body[(i - 1 + ML) % ML];
//			maze[sum / 100][sum % 100] = '@';
//			cout << "游戏操作：  ↑:w   ↓:s   ←:a   →:d" << endl;
//			cout << "score: " << T.length * 10 - 10 << endl;
//			for (i = 0; i <= 20; i++)
//			{
//				for (j = 0; j <= 40; j++)
//				{
//					cout << maze[i][j];
//				}
//				cout << endl;
//			}
//		}
//		else
//		{
//			sum = T.body[(T.head - 1 + ML) % ML];
//			system("CLS");
//			for (i = T.tail; i != T.head;)
//			{
//				temp = T.body[i];
//				map[temp / 100][temp % 100] = -1;
//				i++;
//				i %= ML;
//			}
//			if (jud == 'w')
//			{
//				//cout<<"-->w\n";
//				if (map[sum / 100 - 1][sum % 100] != -1)
//				{
//					for (i = T.tail; i != T.head;)
//					{
//						temp = T.body[i];
//						map[temp / 100][temp % 100] = 0;
//						i++;
//						i %= ML;
//					}
//					up();
//				}
//				else
//				{
//					system("CLS");
//					cout << "============================================" << endl;
//					cout << "       很遗憾，你输了!!!最后得分为:" << T.length * 10 - 10 << endl;
//					cout << "============================================" << endl;
//					break;
//				}
//
//			}
//			else if (jud == 'a')
//			{
//				//cout<<"-->a\n";
//				if (map[sum / 100][sum % 100 - 1] != -1)
//				{
//					for (i = T.tail; i != T.head;)
//					{
//						temp = T.body[i];
//						map[temp / 100][temp % 100] = 0;
//						i++;
//						i %= ML;
//					}
//					left();
//				}
//				else
//				{
//					system("CLS");
//					cout << "============================================" << endl;
//					cout << "       很遗憾，你输了!!!最后得分为:" << T.length * 10 - 10 << endl;
//					cout << "============================================" << endl;
//					break;
//				}
//			}
//			else if (jud == 's')
//			{
//				//cout<<"-->s\n";
//				if (map[sum / 100 + 1][sum % 100] != -1)
//				{
//					for (i = T.tail; i != T.head;)
//					{
//						temp = T.body[i];
//						map[temp / 100][temp % 100] = 0;
//						i++;
//						i %= ML;
//					}
//					down();
//				}
//				else
//				{
//					system("CLS");
//					cout << "============================================" << endl;
//					cout << "       很遗憾，你输了!!!最后得分为:" << T.length * 10 - 10 << endl;
//					cout << "============================================" << endl;
//					break;
//				}
//			}
//			else if (jud == 'd')
//			{
//				//cout<<"-->d\n";
//				if (map[sum / 100][sum % 100 + 1] != -1)
//				{
//					for (i = T.tail; i != T.head;)
//					{
//						temp = T.body[i];
//						map[temp / 100][temp % 100] = 0;
//						i++;
//						i %= ML;
//					}
//					right();
//				}
//				else
//				{
//					system("CLS");
//					cout << "============================================" << endl;
//					cout << "       很遗憾，你输了!!!最后得分为:" << T.length * 10 - 10 << endl;
//					cout << "============================================" << endl;
//					break;
//				}
//			}
//
//			if (T.length >= 20) {
//				system("CLS");
//				cout << "============================================" << endl;
//				cout << "                 恭喜，过关!!! " << endl;
//				cout << "============================================" << endl;
//				break;
//			}
//
//			memset(maze, ' ', sizeof(maze));
//			for (i = 0; i <= 20; i++)
//				for (j = 0; j <= 40; j++)
//				{
//					if (map[i][j] == -1)
//						maze[i][j] = '#';
//					else if (map[i][j] == 1)
//						maze[i][j] = 'o';
//				}
//			for (i = T.tail; i != T.head;)
//			{
//				sum = T.body[i];
//				maze[sum / 100][sum % 100] = '*';
//				++i;
//				i %= ML;
//			}
//			sum = T.body[(i - 1 + ML) % ML];
//			maze[sum / 100][sum % 100] = '@';
//			cout << "游戏操作：  ↑:w   ↓:s   ←:a   →:d" << endl;
//			cout << "score: " << T.length * 10 - 10 << endl;
//			for (i = 0; i <= 20; i++)
//			{
//				for (j = 0; j <= 40; j++)
//				{
//					cout << maze[i][j];
//				}
//				cout << endl;
//			}
//		}
//
//	}
//	system("pause");
//	return 0;
//}