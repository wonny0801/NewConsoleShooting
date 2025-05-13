#include "include.h"

Bullet::Bullet()
{
	x = 0;
	y = 0;
	body = '|';
	fColor = YELLOW; 
	bColor = BLACK; 
	IsAlive = false; 
}




Bullet::~Bullet()
{
}

void Bullet::Update()
{
	if(IsAlive)
	{ 
		Move();
		Clipping();
	}
}

void Bullet::Draw()
{
	if (IsAlive == true)
	{
		DrawChar(x, y, body, fColor, bColor);
	}
}

void Bullet::Move()
{
	y--;
}

void Bullet::Clipping()
{
	if (y < 0)
	{
		Disable();
	}
}

void Bullet::Enable(int x, int y)
{
	this->x = x;
	this->y = y;
	IsAlive = true;
}

void Bullet::Disable()
{
	IsAlive = false;
}


