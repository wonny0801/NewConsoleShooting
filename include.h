#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include "Define.h"

//#include "Player.h"
#include "Bullet.h"
#include "Player.h"




#include "GameMng.h"//�����ڴ� �� �ؿ�..

void Init();
void Update();
void Draw();
void Release();

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void EngineSync(int fps);
void ClearScreen();
void Flip();