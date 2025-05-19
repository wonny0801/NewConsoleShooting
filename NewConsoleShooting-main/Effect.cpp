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
	fColor = GREEN;
	bColor = BLACK;
	
	index = -1;
	indexUpdateTime = 0;
}

Effect::~Effect()
{
}

void Effect::Update()
{
	if (IsAlive)
	{
		if (indexUpdateTime < GetTickCount())
		{
			index++;
			indexUpdateTime = GetTickCount() + 300;

			if (index > 2)
			{
				Disable();
			}
		}
	}
	
}

void Effect::Draw()
{
	
	if (IsAlive)
	{
		DrawChar(x - 1, y - 1, ebody[index][0][0],fColor,bColor);
		DrawChar(x, y - 1, ebody[index][0][1], fColor, bColor);
		DrawChar(x + 1, y - 1, ebody[index][0][2], fColor, bColor);

		DrawChar(x - 1, y , ebody[index][1][0], fColor, bColor);
		DrawChar(x, y , ebody[index][1][1], fColor, bColor);
		DrawChar(x + 1, y, ebody[index][1][2], fColor, bColor);

		DrawChar(x - 1, y + 1, ebody[index][2][0], fColor, bColor);
		DrawChar(x , y + 1, ebody[index][2][1], fColor, bColor);
		DrawChar(x + 1, y + 1, ebody[index][2][2], fColor, bColor);
		
	}
	
}

void Effect::Disable()
{
	IsAlive = false;
	index = -1;
	indexUpdateTime = 0;
}




