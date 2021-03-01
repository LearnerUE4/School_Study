#pragma once
#define _GOTOXY_H
#define _GOTOXY_H
#include <iostream>
#include <Windows.h>
#include "unit.h"
using namespace std;

class Root:Unit
{
public:
	Root();
	~Root();
public:
	void draw(int star_x, int star_y, int end_x, int end_y);
	void HideCursor();
private:

};
