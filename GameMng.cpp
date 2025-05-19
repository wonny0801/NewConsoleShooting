#include "include.h"

GameMng::GameMng()
{
	enemycooltime = 0;
	//gamePlayTime = GetTickCount();

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

	smash();
	
	for (int i = 0; i < D_EFFECT_MAX; i++)
	{
		Effects[i].Update();
	}
	gametime.Update();
}

void GameMng::Draw()
{
	player.Draw();
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		bullets[i].Draw();
	}
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		Enemys[i].Draw();
	}
	for (int i = 0; i < D_EFFECT_MAX; i++)
	{
		Effects[i].Draw();
	}

	score.Draw();
	gametime.Draw();
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

void GameMng::smash()
{

		for (int i = 0; i < D_BULLET_MAX; i++)
		{
			if (bullets[i].IsAlive)
			{
				for (int j = 0; j < D_ENEMY_MAX; j++)
				{
					if (Enemys[j].IsAlive)
					{
						if (bullets[i].x == Enemys[j].x && 
							(bullets[i].y == Enemys[j].y || bullets[i].y + 1 == Enemys[j].y))
						{
							Enemys[j].Disable();
							CreateEffect(Enemys[j].x,Enemys[j].y);
							score.ScorePlus();
							break;
						}
					}
				}
			}
		}
		
}


void GameMng::CreateEffect(int x, int y)
{
	
		for (int i = 0; i < D_EFFECT_MAX; i++)
		{
			if (Effects[i].IsAlive == false)
			{
				Effects[i].Enable(x,y);
				break;
			}
		}
	
}

bool GameMng::gamePlayTimeCheck()
{
	if (gametime.gameTime <= 0)
		return false;

	return true;
	
}

void GameMng::TimeOver()
{
	DrawStr(50, 15, score.body.c_str(), score.fColor, score.bColor);
}

