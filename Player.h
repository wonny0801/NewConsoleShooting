#pragma once
class Player
{
public:
	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;

	DWORD bulletCoolTime;
	Player();
	~Player();


	void Update();
	void Draw();
	void Move();

	void Clipping();
	void FireBullet();

	void PressSpace();

};
