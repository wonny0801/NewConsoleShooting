#include "include.h"

char ebody[3][3][3] =
{
	{
		{' ', ' ', ' '},
		{' ', '*', ' '},
		{' ', ' ', ' '}
	},
	{
		{' ', '*', ' '},
		{'*', '*', '*'},
		{' ', '*', ' '}
	},
	{
		{'*', ' ', '*'},
		{' ', '*', ' '},
		{'*', ' ', '*'}
	}

};
Effect::Effect()
{
	x = 0;
	y = 0;
	fColor = GREEN;
	bColor = BLACK;
	IsAlive = false;

	index = -1;
	indexUpdateTime = 0;
}

Effect::~Effect()
{
}

void Effect::EffectUpdate()
{
	for (int i = 0; i < D_EFFECT_MAX; i++)
	{
		if (gamemng.Effects[i].IsAlive)
		{
			if (gamemng.Effects[i].indexUpdateTime < GetTickCount())
			{
				gamemng.Effects[i].index++;
				gamemng.Effects[i].indexUpdateTime = GetTickCount() + 400;

				if (gamemng.Effects[i].index > 2)
				{
					gamemng.Effects[i].IsAlive = false;
					gamemng.Effects[i].index = -1;
					gamemng.Effects[i].indexUpdateTime = 0;
				}
			}
		}
	}
}

void Effect::EffectDraw()
{
	for (int i = 0; i < D_EFFECT_MAX; i++)
	{
		if (gamemng.Effects[i].IsAlive)
		{
			DrawChar(gamemng.Effects[i].x - 1, gamemng.Effects[i].y - 1, ebody[gamemng.Effects[i].index][0][0],
				gamemng.Effects[i].fColor, gamemng.Effects[i].bColor);
			DrawChar(gamemng.Effects[i].x, gamemng.Effects[i].y - 1, ebody[gamemng.Effects[i].index][0][1],
				gamemng.Effects[i].fColor, gamemng.Effects[i].bColor);
			DrawChar(gamemng.Effects[i].x + 1, gamemng.Effects[i].y - 1, ebody[gamemng.Effects[i].index][0][2],
				gamemng.Effects[i].fColor, gamemng.Effects[i].bColor);

			DrawChar(gamemng.Effects[i].x - 1, gamemng.Effects[i].y, ebody[gamemng.Effects[i].index][1][0],
				gamemng.Effects[i].fColor, gamemng.Effects[i].bColor);
			DrawChar(gamemng.Effects[i].x, gamemng.Effects[i].y, ebody[gamemng.Effects[i].index][1][1],
				gamemng.Effects[i].fColor, gamemng.Effects[i].bColor);
			DrawChar(gamemng.Effects[i].x + 1, gamemng.Effects[i].y, ebody[gamemng.Effects[i].index][1][2],
				gamemng.Effects[i].fColor, gamemng.Effects[i].bColor);

			DrawChar(gamemng.Effects[i].x - 1, gamemng.Effects[i].y + 1, ebody[gamemng.Effects[i].index][2][0],
				gamemng.Effects[i].fColor, gamemng.Effects[i].bColor);
			DrawChar(gamemng.Effects[i].x, gamemng.Effects[i].y + 1, ebody[gamemng.Effects[i].index][2][1],
				gamemng.Effects[i].fColor, gamemng.Effects[i].bColor);
			DrawChar(gamemng.Effects[i].x + 1, gamemng.Effects[i].y + 1, ebody[gamemng.Effects[i].index][2][2],
				gamemng.Effects[i].fColor, gamemng.Effects[i].bColor);
		}
	}
}

void Effect::CreateEffect(int x, int y)
{
	for (int i = 0; i < D_EFFECT_MAX; i++)
	{
		if (gamemng.Effects[i].IsAlive == false)
		{
			gamemng.Effects[i].IsAlive = true;
			gamemng.Effects[i].x = x;
			gamemng.Effects[i].y = y;
			break;
		}
	}
}
