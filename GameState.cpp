#include "include.h"

GameState::GameState()
{
	enemycooltime = 0;
}

GameState::~GameState()
{
	for (int i = 0; i < bullets.size(); i++)
	{
		delete bullets[i];
	}
	for (int i = 0; i < Enemys.size(); i++)
	{
		delete Enemys[i];
	}
	for (int i = 0; i < Effects.size(); i++)
	{
		delete Effects[i];
	}
}

void GameState::Start()
{
}

void GameState::Update()
{
	if (GetAsyncKeyState(VK_F2)) // 업데이트 함수의 맨 밑으로...
	{
		GameMng::Getles()->statectrl.StateChange(new MenuState);
	}
	
	player.Update();
	for (int i = 0; i < bullets.size(); i++)
	{
		bullets[i]->Update();
	}
	for (int i = 0; i < Enemys.size(); i++)
	{
		Enemys[i]->Update(); 
	}

	/*if (enemycooltime < GetTickCount())
	{
		enemycooltime = GetTickCount() + 50;
		CreateEnemy(rand() % 120, 0);
	}*/
	CreateEnemy(rand() % 120, 0);

	smash();
	
	for (int i = 0; i < Effects.size(); i++)
	{
		Effects[i]->Update();
	}
	//gametime.Update();
	
}

void GameState::Draw()
{
	//DrawStr(10, 10, "GameState", WHITE, BLACK);
	player.Draw();
	for (int i = 0; i < bullets.size(); i++)
	{
		bullets[i]->Draw();
	}
	for (int i = 0; i < Enemys.size(); i++)
	{
		Enemys[i]->Draw();
	}
	for (int i = 0; i < Effects.size(); i++)
	{
		Effects[i]->Draw();
	}

	score.Draw();
	//gametime.Draw();
}

void GameState::Exit()
{
}

void GameState::CreateBullet(int x, int y)
{
	GameMng::Getles()->bulletSound.Play();

	for (int i = 0; i < bullets.size(); i++)
	{
		if (bullets[i]->IsAlive == false)
		{
			bullets[i]->Enable(x, y);
			return;
		}
	}
	Bullet* bullet = new Bullet();
	bullet->Enable(x,y);
	bullets.push_back(bullet);
}

void GameState::CreateEnemy(int x, int y)
{
	for (int i = 0; i < Enemys.size(); i++)
	{
		if (Enemys[i]->IsAlive == false)
		{
			Enemys[i]->Enable(x, y);
			return;
		}
	}
	Enemy* enemy = new Enemy();
	enemy->Enable(x, y);
	Enemys.push_back(enemy);
}

void GameState::smash()
{
	for (int i = 0; i < bullets.size(); i++)
	{
		if (bullets[i]->IsAlive)
		{
			for (int j = 0; j < Enemys.size(); j++)
			{
				if (Enemys[j]->IsAlive)
				{
					if (bullets[i]->x == Enemys[j]->x &&
						(bullets[i]->y == Enemys[j]->y || bullets[i]->y + 1 == Enemys[j]->y))
					{
						Enemys[j]->Disable();
						CreateEffect(Enemys[j]->x, Enemys[j]->y);
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
	for (int i = 0; i < Effects.size(); i++)
	{
		if (Effects[i]->IsAlive == false)
		{
			Effects[i]->Enable(x, y);
			return;
		}
	}
	Effect* effect = new Effect();
	effect->Enable(x, y);
	Effects.push_back(effect);
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
