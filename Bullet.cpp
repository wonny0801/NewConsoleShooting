#include "include.h"

Bullet::Bullet()
{
	//x = 0;
	//y = 0;
	body = '|';
	fColor = YELLOW; 
	//bColor = BLACK; 
	//IsAlive = false; 
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




