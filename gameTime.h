#pragma once

class GameTime : public Unit
{
public:
	GameTime();
	~GameTime();

	int gameTime;
	int gameTimeCheck;
	std::string GameTimeBody;

	void Update();
	void Draw();
	void GameTimeMinus();

};