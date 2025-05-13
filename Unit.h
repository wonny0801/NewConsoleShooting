#pragma once
class Unit
{
public:
	Unit();
	~Unit();

	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;
	bool IsAlive;

	virtual void Update();
	void Draw();

	void Enable(int x, int y);
	void Disable();

	
};