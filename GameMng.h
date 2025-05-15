#pragma once
class GameMng
{
public:
	GameMng();
	~GameMng();

	DWORD enemycooltime;

	Player player;
	Bullet bullets[D_BULLET_MAX];
	Enemy Enemys[D_ENEMY_MAX];
	Effect Effects[D_EFFECT_MAX];

	void Update();
	void Draw();

	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);
};

extern GameMng gamemng;
