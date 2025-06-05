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
	//statectrl.StateAdd(E_MENU, new MenuState());
	//statectrl.StateAdd(E_GAME, new GameState());

	statectrl.StateChange(new MenuState);

	system = nullptr;
	FMOD::System_Create(&system);
	system->init(512, FMOD_INIT_NORMAL, nullptr);

	bool result1 = background.LoadSound("Sound/backgroundMusic.mp3", true);
	bool result2 = bulletSound.LoadSound("Sound/bullet.wav", false);

	background.Play();

}

void GameMng::Update()
{
	statectrl.Update();
	system->update();

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



