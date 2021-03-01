
#include <windows.h>
#include <Mmsystem.h>
#include "unit.h"
#include "snake.h"
#include "food.h"
#include "root.h"
#include "Wall.h"
#pragma comment(lib,"winmm.lib")
class Control
{
public:
	Snake* sn=new Snake;
	Food* fo=new Food;
	Wall* wa = new Wall;
	Unit* un = new Unit;
public:
	Control();
	~Control();
	
	void runGame();
	

};

