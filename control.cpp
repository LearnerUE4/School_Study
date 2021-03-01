#include "control.h"
#include "food.h"
#include "snake.h"

Control::Control()
{

}

Control::~Control()
{

}

void Control::runGame()
{
// 	int x = 40;
// 	int y = 50;
// 	Unit un;
// 	//un.show(80, 20);
// 	un.show(60, 10);
	PlaySound(TEXT("E:\\c++Study\\ConsoleApplication5\\8bit风Only my Railgun.wav"),
		NULL, SND_FILENAME | SND_ASYNC);
	un->show(60, 10);
	cout << "分数：" << sn->grade;
	un->show(60, 20);
	cout << "速度:" << sn->speed;

	wa->HideCursor();
	wa->drawWall(5, 5, 40, 5);
	wa->drawWall(5, 5, 5, 20);
	wa->drawWall(50, 5, 50, 20);
	wa->drawWall(5, 20, 40, 20);
	wa->drawWall(74, 5, 74, 20);
	// 	extern Wall wa;
	// 	wa.drawWall();
	//extern Food fo;
	fo->showFood();
	//*Food* f = &fo;*/
	// 	int a = 40, b = 12;
	// 	fo.showFood(a, b);
	//*sn.Init();*/
	sn->Init();

	while (true)
	{
		char pause = ' ';
		if (((GetAsyncKeyState(pause) & 0x8000) ? 1 : 0))
		{
			MessageBox(NULL, TEXT("游戏暂停，是否继续？"), TEXT("游戏暂停"), 0);

		}
		sn->Move();
		if (sn->IsEat(fo))
		{
			fo->destoryFood();
			fo->showFood();
			un->show(60, 10);
			cout <<"分数:"<< sn->grade;
			if (sn->grade % 5 == 0)
			{
				sn->speed++;
				un->show(60, 20);
				cout<< "速度:" << sn->speed;
			}

		}
		// 		if (sn.HitItself())
		// 		{
		// 			MessageBox(NULL, TEXT("游戏结束，吃到了自己"), TEXT("游戏结束"), 0);
		// 			system("cls");
		// 			RunGame();
		// 		}
		if (sn->OverBorder())
		{
			MessageBox(NULL, TEXT("游戏结束，撞墙了"), TEXT("游戏结束"), 0);
			system("cls");
			runGame();
		}
// 		if (sn->HitItself())
// 		{
// 			MessageBox(NULL, TEXT("游戏结束，吃到了自己"), TEXT("游戏结束"), 0);
// 			system("cls");
// 			runGame();
// 		}
		Sleep(1000 / (sn->speed));
	}
}
