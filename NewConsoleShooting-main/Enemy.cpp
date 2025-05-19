#include"include.h"

Enemy::Enemy()
{
	fColor = GREEN;
	bColor = GREEN;
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	if (IsAlive)
	{
		Move();
		Clipping();
	}
	
}


void Enemy::Move()
{
	y++;
}

void Enemy::Clipping()
{
	if (y > 29)
	{
		Disable(); //IsAlive = false;
	}
}

