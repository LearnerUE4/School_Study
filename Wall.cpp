#include "Wall.h"

Wall::Wall()
{
}

Wall::~Wall()
{
}

void Wall::drawWall(int star_x, int star_y, int end_x, int end_y)
{
	for (star_x; star_x < end_x; star_x++) //上下边界
	{
		COORD pos = { star_x,star_y };
		HANDLE hOutBorderUp;
		hOutBorderUp = GetStdHandle(STD_OUTPUT_HANDLE); /* 获取标注输出句柄 */
		SetConsoleCursorPosition(hOutBorderUp, pos);
		cout << "—";
	}
	for (star_x; star_y < end_y; star_y++) //左右边界
	{
		COORD pos = { star_x,star_y };
		HANDLE hOutBorderLeft;
		hOutBorderLeft = GetStdHandle(STD_OUTPUT_HANDLE); /* 获取标注输出句柄 */
		SetConsoleCursorPosition(hOutBorderLeft, pos);
		cout << "|";
	}
}
void Wall::HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
	CursorInfo.bVisible = false; //隐藏控制台光标
	SetConsoleCursorInfo(handle, &CursorInfo);//设置控制台光标状态
}
