#include "include.h"

Score score;

void ScoreInit()
{
    score.x = 1;
    score.y = 1;
    score.fColor = WHITE;
    score.bColor = BLACK;
    score.Score = 0;

    sprintf_s(score.body, sizeof(score.body), "SCORE : %d", score.Score);
}

void ScorePlus()
{
    score.Score += 10; // 스코어 증가 (예: 10점 추가)
    sprintf_s(score.body, sizeof(score.body), "SCORE : %d", score.Score); // 문자열 업데이트
}


void ScoreUpdate()
{
    // ScorePlus(); // 스코어 증가 (테스트용)
}

void ScoreDraw()
{
    DrawStr(score.x, score.y, score.body, score.fColor, score.bColor);
}