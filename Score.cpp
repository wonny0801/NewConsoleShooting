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
    score.Score += 10; // ���ھ� ���� (��: 10�� �߰�)
    sprintf_s(score.body, sizeof(score.body), "SCORE : %d", score.Score); // ���ڿ� ������Ʈ
}


void ScoreUpdate()
{
    // ScorePlus(); // ���ھ� ���� (�׽�Ʈ��)
}

void ScoreDraw()
{
    DrawStr(score.x, score.y, score.body, score.fColor, score.bColor);
}