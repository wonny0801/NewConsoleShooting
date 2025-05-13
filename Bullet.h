#pragma once
class Bullet
{
public:
	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;
	bool IsAlive;

	Bullet();
	~Bullet();

	void Update();
	void Draw();

	void Move();
	void Clipping();

	void Enable(int x, int y);
	void Disable();

	//void CreateBullet(int x, int y);
};