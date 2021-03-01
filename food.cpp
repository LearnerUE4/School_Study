#include "food.h"
#include "snake.h"
using namespace std;

Food::Food()
{

}
Food::~Food()
{

}

void Food::showFood()
{
	srand((int)time(0));
	x = 5+rand()%(39-6);
	y = 5+rand()%(19-6);
	Unit:: show(x,y);
	cout << "。" << endl;
}

void Food::showFood(int x,int y)
{
	//srand((int)time(0));
	//x = 30;
	//y = 12;
	Unit:: show(x,y);
	cout << "。" << endl;
}

void Food::destoryFood()
{
	
	Unit::show(x, y);
	cout << "" << endl;
	x = NULL;
	y = NULL;
}
