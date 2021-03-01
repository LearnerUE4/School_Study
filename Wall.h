#pragma once
#include "root.h"

class Wall:Unit
{
public:
/*	static Root ro;*/
	Wall();
	~Wall();
	void drawWall(int star_x, int star_y, int end_x, int end_y);
	void HideCursor();
};

