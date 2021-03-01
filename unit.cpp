#include "unit.h"

using namespace std;
Unit::Unit()
{

}
Unit::~Unit()
{

}
void Unit::show(short int x,short int y )
{
	HANDLE hConsoleOut;
	COORD pos = { x,y };
	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);	
	SetConsoleCursorPosition(hConsoleOut, pos);

/*	cout << "#" << endl;*/
}

// void Unit::show(short int x, short int y, string str,int grade)
// {
// 	HANDLE hConsoleOut;
// 	COORD pos = { x,y };
// 	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);	
// 	SetConsoleCursorPosition(hConsoleOut, pos);
// 	cout << str<< grade;
// }




