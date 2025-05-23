#include "include.h"

//GameTime::GameTime()
//{
//	x = 57;
//	y = 0;
//	gameTime = 61;
//	GameTimeBody = "TIME : " + std::to_string(gameTime);
//	fColor = WHITE;
//	bColor = BLACK;
//
//	gameTimeCheck = 0;
//	
//}
//
//GameTime::~GameTime()
//{
//}
//
//void GameTime::Update()
//{
//	if (gameTimeCheck < GetTickCount())
//	{
//		gameTimeCheck = GetTickCount() + 1000;
//		GameTimeMinus();
//		GameTimeBody = "TIME : " + std::to_string(gameTime);
//	}
//}
//
//void GameTime::Draw()
//{
//	DrawStr(x, y, GameTimeBody.c_str(), fColor, bColor);
//}
//
//void GameTime::GameTimeMinus()
//{
//	gameTime--;
//}
