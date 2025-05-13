#include "include.h"

Unit::Unit()
{
	x = 0;
	y = 0;
	body = ' ';
	fColor = INTENSITY_WHITE;
	bColor = BLACK;
	IsAlive = false;
}

Unit::~Unit()
{
}

void Unit::Update()
{
}

void Unit::Draw()
{
	if (IsAlive)
		DrawChar(x, y, body, fColor, bColor);
}

void Unit::Enable(int x, int y)
{
	this->x = x;
	this->y = y;
	IsAlive = true;
}

void Unit::Disable()
{
	IsAlive = false;
}


