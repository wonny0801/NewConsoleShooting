#include"include.h"

Enemy::Enemy()
{
	x = 0;
	y = 0;
	body = ' ';
	fColor = GREEN;
	bColor = GREEN;
	IsAlive = false;
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
		IsAlive = false;
	}
}



void Enemy::Smash()
{
}
