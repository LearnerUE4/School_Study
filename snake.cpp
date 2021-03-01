#include "snake.h"
#include "food.h"
using namespace std;

Snake::Snake()
{
	
}
Snake::~Snake()
{

}

bool Snake::IsEat(Food* f)
{
	
	if(SnakeBody.front().x==f->x && SnakeBody.front().y==f->y)
	{
		SnakeBody.push_back(loca);
		length++;
		grade++;
		return true;
	}
	return false;
}

bool Snake::HitItself()
{
	for (int i=1;i<SnakeBody.size();i++)
	{
		if (SnakeBody.front().x == SnakeBody[i].x &&
			SnakeBody.front().y== SnakeBody[i].y)
		{
			return true;
		}
	}
	return false;
}

bool Snake::OverBorder()
{
	if (SnakeBody.front().x<=5 || 50<=SnakeBody.front().x ||
		20<=SnakeBody.front().y ||SnakeBody.front().y<=5)
	{
		return true;
	}
	return false;
}

void Snake::Init()
{
	for (int i = length; i >0; i--)
	{
		loca.x = 22+(i);
		loca.y = 12;
		this->SnakeBody.push_back(loca);
		Unit::show(loca.x,loca.y);
// 		HANDLE hConsoleOut;
// 		COORD pos = { loca.x,loca.y };
// 		hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
// 		SetConsoleCursorPosition(hConsoleOut, pos);
		cout << "* ";
		loca.x++;
	}
}

void Snake::Move()
{
	loca = SnakeBody.front();
	ChangeDirection();
	switch (this->Direction)		//根据key的值确定蛇的移动方向
	{
	case 'd':
		loca.x = SnakeBody.front().x + 1;	  //新的蛇头的头部等于容器内第一个数据(旧蛇头)x坐标+2
		loca.y = SnakeBody.front().y;
		break;
	case 'a':
		loca.x = SnakeBody.front().x - 1;
		loca.y = SnakeBody.front().y;
		break;
	case 'w':
		loca.x = SnakeBody.front().x;
		loca.y = SnakeBody.front().y - 1;
		break;
	case 's':
		loca.x = SnakeBody.front().x;
		loca.y = SnakeBody.front().y + 1;
	}
	SnakeBody.insert(SnakeBody.begin(), loca);
	for (int i=0;i<SnakeBody.size();i++)
	{
// 		COORD pos = { loca.x,loca.y };
// 		SetConsoleCursorPosition(hConsoleOut, pos);
		Unit::show(loca.x, loca.y);
		cout << "*";
	}
	//清理蛇尾留下的痕迹
	Unit::show(SnakeBody.back().x, SnakeBody.back().y);
// 	COORD pos_end = { SnakeBody.back().x ,SnakeBody.back().y }; 
// 	SetConsoleCursorPosition(hConsoleOut, pos_end);
	SnakeBody.pop_back();
	cout << " ";
}

void Snake::ChangeDirection()
{
	if (_kbhit())
	{
		Direction = _getch();

		switch (Direction)
		{
			case 'w':
				if (this->Direction == 'a' || this->Direction == 'd')
					this->Direction = 'w';
				else if(this->Direction == 's')
				{
					this->Direction = 's';
					break;
				}
				break;

			case 's':
				if (this->Direction == 'a' || this->Direction == 'd')
					this->Direction = 's';
				else if (this->Direction == 'w')
				{
					this->Direction = 'w';
					break;
				}
				break;

			case 'a':
				if (this->Direction == 'w' || this->Direction == 's')
					this->Direction = 'a';
				else if (this->Direction == 'd')
				{
					this->Direction = 'd';
					break;
				}
				break;

			case 'd':
				if (this->Direction == 'w' || this->Direction == 's')
					this->Direction = 'd';
				else if (this->Direction == 'a')
				{
					this->Direction = 'a';
					break;
				}
				break;
		}
	}
}


