#pragma once
class Enemy: public Unit
{
public:
	Enemy();
	~Enemy();

	

	void Update() override;
	

	void Move();
	void Clipping();

	//void CreateEnemy(int x, int y);
	void Smash();
};