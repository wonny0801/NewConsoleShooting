#include "include.h"

GameState::GameState()
{
	enemycooltime = 0;
}

GameState::~GameState()
{
}

void GameState::Start()
{
}

void GameState::Update()
{
	if (GetAsyncKeyState(VK_F2))
	{
		GameMng::Getles()->statectrl.StateChange(E_MENU);
	}
	player.Update();
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		bullets[i].Update();
	}
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		Enemys[i].Update(); 
	}

	/*if (enemycooltime < GetTickCount())
	{
		enemycooltime = GetTickCount() + 50;
		CreateEnemy(rand() % 120, 0);
	}*/
	CreateEnemy(rand() % 120, 0);

	smash();
	
	for (int i = 0; i < D_EFFECT_MAX; i++)
	{
		Effects[i].Update();
	}
	//gametime.Update();
}

void GameState::Draw()
{
	//DrawStr(10, 10, "GameState", WHITE, BLACK);
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
	//gametime.Draw();
}

void GameState::Exit()
{
}

void GameState::CreateBullet(int x, int y)
{
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		if (bullets[i].IsAlive == false)
		{
			bullets[i].Enable(x, y);
			GameMng::Getles()->bulletSound.Play();
			break;
		}
	}
}

void GameState::CreateEnemy(int x, int y)
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

void GameState::smash()
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
						CreateEffect(Enemys[j].x, Enemys[j].y);
						score.ScorePlus();
						break;
					}
				}
			}
		}
	}
}

void GameState::CreateEffect(int x, int y)
{
	for (int i = 0; i < D_EFFECT_MAX; i++)
	{
		if (Effects[i].IsAlive == false)
		{
			Effects[i].Enable(x, y);
			break;
		}
	}
}

//bool GameState::gamePlayTimeCheck()
//{
//	if (gametime.gameTime <= 0)
//		return false;
//
//	return true;
//}
//
//void GameState::TimeOver()
//{
//	DrawStr(50, 15, score.body.c_str(), score.fColor, score.bColor);
//}
