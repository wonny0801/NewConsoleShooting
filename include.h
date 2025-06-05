#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include "Define.h"
#include <string>
#include <sstream>
#include <fmod.hpp>
//#include <list>
#include <vector>



#include "Singleton.h"

#include "Unit.h"

#include "State.h"
#include "StateCtrl.h"


#include "Bullet.h"
#include "Player.h"
#include "Enemy.h"
#include "Score.h"
#include "Effect.h"
#include "gameTime.h"

#include "Sound.h"




#include "MenuState.h"
#include "GameState.h"

#include "GameMng.h"//관리자는 맨 밑에..

void Init();
void Update();
void Draw();
void Release();

//void GameOverDraw();

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void EngineSync(int fps);
void ClearScreen();
void Flip();

//extern GameMng gamemng;