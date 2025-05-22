#include "include.h"

GameMng::GameMng()
{
	
	//gamePlayTime = GetTickCount();

}

GameMng::~GameMng()
{


}

void GameMng::Init()
{
	statectrl.StateAdd(E_MENU, new MenuState());
	statectrl.StateAdd(E_GAME, new GameState());

	statectrl.StateChange(E_MENU);
}

void GameMng::Update()
{
	statectrl.Update();

}

void GameMng::Draw()
{
	statectrl.Draw();
	/*player.Draw();
	//for (int i = 0; i < D_BULLET_MAX; i++)
	//{
	//	bullets[i].Draw();
	//}
	//for (int i = 0; i < D_ENEMY_MAX; i++)
	//{
	//	Enemys[i].Draw();
	//}
	//for (int i = 0; i < D_EFFECT_MAX; i++)
	//{
	//	Effects[i].Draw();
	}

	score.Draw();
	gametime.Draw();*/
}



