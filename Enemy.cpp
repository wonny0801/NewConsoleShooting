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
		Smash();
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
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		if (gamemng.bullets[i].IsAlive)
		{
			for (int j = 0; j < D_ENEMY_MAX; j++)
			{
				if (gamemng.Enemys[j].IsAlive)
				{
					if (gamemng.bullets[i].x == gamemng.Enemys[j].x && (gamemng.bullets[i].y == gamemng.Enemys[j].y
						|| gamemng.bullets[i].y + 1 == gamemng.Enemys[j].y))
					{
						gamemng.Enemys[j].IsAlive = false;
						
					}
				}
			}
		}
	}
}
