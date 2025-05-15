#include "include.h"

GameMng::GameMng()
{
	enemycooltime = 0;
	
}

GameMng::~GameMng()
{


}

void GameMng::Update()
{
	player.Update();
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		bullets[i].Update();
	}
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		Enemys[i].Update(); 
	}

	if (enemycooltime < GetTickCount())
	{
		enemycooltime = GetTickCount() + 50;
		CreateEnemy(rand() % 120, 0);
	}

	for (int i = 0; i < D_EFFECT_MAX; i++)
	{
		Effects[i].Update();
	}
	
}

void GameMng::Draw()
{
	player.Draw();
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		bullets[i].Draw();
	}
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		Enemys[i].Draw();
	}
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		Effects[i].Draw();
	}
}

void GameMng::CreateBullet(int x, int y)
{

	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		if (bullets[i].IsAlive == false)
		{
			bullets[i].Enable(x, y);
			break;
		}
	}
}

void GameMng::CreateEnemy(int x, int y)
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (Enemys[i].IsAlive == false)
		{
			Enemys[i].Enable(x, y);
			break;
		}
	}
}
