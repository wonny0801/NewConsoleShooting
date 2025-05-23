#include "include.h"



Player::Player()
{
	x = 60;
	y = 15;
	body = 'A';
	fColor = INTENSITY_WHITE;
	bColor = BLACK;
	IsAlive = true;
	bulletCoolTime = 0;
}

Player::~Player()
{
}

void Player::Update()
{
	Move();
	Clipping();
	FireBullet();
	
}



void Player::Move()
{
	if (GetAsyncKeyState(VK_UP) & 0x8000)
		y--;

	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		x--;

	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		y++;

	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		x++;
}

void Player::Clipping()
{
	if (x > 119)
		x = 119;
	//x = 0;

	if (x < 0)
		x = 0;
	//x = 119;

	if (y > 29)
		y = 29;
	//y = 0;

	if (y < 0)
		y = 0;
	//y = 29;
}

void Player::FireBullet()
{
	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
	{
		//gamemng.CreateBullet(x, y);

		//GameMng::Getles()->CreateBullet(x,y);
		
		((GameState*)GameMng::Getles()->statectrl.m_pStates[E_GAME])->CreateBullet(x, y);
		//객체가 없는 클래스의 함수에 접근하는법...
	}
	
}

