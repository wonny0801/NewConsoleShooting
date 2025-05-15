#include "include.h"

//Score score;
//
//void ScoreInit()
//{
//    score.x = 1;
//    score.y = 1;
//    score.fColor = WHITE;
//    score.bColor = BLACK;
//    score.Score = 0;
//
//    sprintf_s(score.body, sizeof(score.body), "SCORE : %d", score.Score);
//}
//
//void ScorePlus()
//{
//    score.Score += 10; // ���ھ� ���� (��: 10�� �߰�)
//    sprintf_s(score.body, sizeof(score.body), "SCORE : %d", score.Score); // ���ڿ� ������Ʈ
//}
//
//
//void ScoreUpdate()
//{
//    // ScorePlus(); // ���ھ� ���� (�׽�Ʈ��)
//}
//
//void ScoreDraw()
//{
//    DrawStr(score.x, score.y, score.body, score.fColor, score.bColor);
//}

Score::Score()
{
	x = 1;
	y = 1;
	fColor = WHITE;
	bColor = BLACK;
	GameScore = 0;

	//sprintf_s(body, "SCORE : %d", GameScore); // ���� 1...
	//body.assign("SCORE :" + std::to_string(GameScore)); // ���� 2...
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

	/*std::ostringstream os;
	os << "hi~";
	score.body = os.str();*/

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
