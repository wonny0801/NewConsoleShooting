#pragma once
class Player : public Unit
{
public:
	

	DWORD bulletCoolTime;
	Player();
	~Player();


	void Update() override;
	

	void Move();

	void Clipping();
	void FireBullet();

	

};
