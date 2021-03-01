#pragma once
#include "unit.h"
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;
class Food:Unit
{
public:
	Unit::x ;
	Unit::y;
	Food();
	~Food();
public:
	void showFood();
	void showFood(int x, int y);
	void destoryFood();
	
};

