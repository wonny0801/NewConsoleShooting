#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include <random>
#include <string>
#include <sstream>
#include "Define.h"

#include "Unit.h"


#include "Bullet.h"
#include "Player.h"
#include "Enemy.h"
#include "Score.h"
#include "Effect.h"
#include "gameTime.h"





#include "GameMng.h"//관리자는 맨 밑에..

void Init();
void Update();
void Draw();
void Release();

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void EngineSync(int fps);
void ClearScreen();
void Flip();

extern GameMng gamemng;