#include "include.h"



Score::Score()
{
	x = 1;
	y = 1;
	fColor = WHITE;
	bColor = BLACK;
	GameScore = 0;

	//sprintf_s(body, "SCORE : %d", GameScore); // ���� 1...
	//body.assign("SCORE :" + std::to_string(GameScore)); // ���� 2...
	/*std::ostringstream os;
	os << "hi~";
	score.body = os.str();*/
	body = "SCORE : " + std::to_string(GameScore);
	
}

Score::~Score()
{
}

void Score::ScorePlus()
{
	GameScore += 10; // ���ھ� ���� (��: 10�� �߰�)
	//sprintf_s(body, sizeof(body), "SCORE : %d", GameScore); // ���ڿ� ������Ʈ
	//body.assign("SCORE : %d", GameScore);

	

	body.assign("SCORE :" + std::to_string(GameScore));
}

void Score::Update()
{
}

void Score::Draw()
{
	DrawStr(x, y, body.c_str(), fColor, bColor);
	// .c_str() : string�� char[]�� ���º�ȯ ���ִ� �Լ�...
}
