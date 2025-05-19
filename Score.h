#pragma once

//struct Score
//{
//	int Score;
//	int x;
//	int y;
//	char body[50] = "SCORE : ";
//	WORD fColor;
//	WORD bColor;
//};
//
//
//void ScoreInit();
//void ScorePlus();
//void ScoreUpdate();
//void ScoreDraw();

class Score : public Unit
{
public:
	Score();
	~Score();

	


	int GameScore;
	//char body[50];
	std::string body;

	void ScorePlus();
	void Update();
	void Draw();
};
