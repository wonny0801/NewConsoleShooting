#pragma once

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
