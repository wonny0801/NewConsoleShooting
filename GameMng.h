#pragma once
class GameMng
{
public:
	GameMng();
	~GameMng();

	Player player;
	Bullet bullets[D_BULLET_MAX];
	Enemy Enemys[D_ENEMY_MAX];

	void Update();
	void Draw();

	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);
};

extern GameMng gamemng;
