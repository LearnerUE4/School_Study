#pragma once

#include <conio.h>
#include <vector>
#include <iostream>
#include <windows.h>
#include <time.h>
#include "food.h"
#include "unit.h"
#include "Wall.h"
// class Unit;
// static Food fo;
class Snake:Unit
{
public:
	
	int grade=0;
	typedef struct Location
	{
		int x;
		int y;
	}SnakeLocation;
	Location loca;
	vector<Location> SnakeBody;
	int length = 5;
	int speed=5;
	char Direction='d';
	Snake();
	~Snake();
	bool IsEat(Food* f);
	bool HitItself();
	bool OverBorder();
	void Init();
	void Move();
private:
	
	void ChangeDirection();
};