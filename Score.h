#pragma once

struct Score
{
	int Score;
	int x;
	int y;
	char body[50] = "SCORE : ";
	WORD fColor;
	WORD bColor;
};


void ScoreInit();
void ScorePlus();
void ScoreUpdate();
void ScoreDraw();
