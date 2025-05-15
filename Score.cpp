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
//    score.Score += 10; // 스코어 증가 (예: 10점 추가)
//    sprintf_s(score.body, sizeof(score.body), "SCORE : %d", score.Score); // 문자열 업데이트
//}
//
//
//void ScoreUpdate()
//{
//    // ScorePlus(); // 스코어 증가 (테스트용)
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

	//sprintf_s(body, "SCORE : %d", GameScore); // 예시 1...
	//body.assign("SCORE :" + std::to_string(GameScore)); // 예시 2...
	body = "SCORE : " + std::to_string(GameScore);
	
}

Score::~Score()
{
}

void Score::ScorePlus()
{
	GameScore += 10; // 스코어 증가 (예: 10점 추가)
	//sprintf_s(body, sizeof(body), "SCORE : %d", GameScore); // 문자열 업데이트
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
	// .c_str() : string을 char[]로 형태변환 해주는 함수...
}
