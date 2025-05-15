#pragma once

//struct Effect
//{
//	int x;
//	int y;
//	WORD fColor;
//	WORD bColor;
//	bool IsAlive;
//
//	int index;
//	DWORD indexUpdateTime;
//};
//
//void EffectInit();
//void EffectUpdate();
//void EffectDraw();
//
//void CreateEffect(int x, int y);

class Effect: public Unit
{
public:

	int index;
	DWORD indexUpdateTime;

	Effect();
	~Effect();

	
	void EffectUpdate();
	void EffectDraw();
	
	void CreateEffect(int x, int y);
};
