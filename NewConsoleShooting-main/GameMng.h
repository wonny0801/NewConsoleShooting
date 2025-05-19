#pragma once
class GameMng
{
public:
	GameMng();
	~GameMng();

	//DWORD gamePlayTime;
	DWORD enemycooltime;

	Player player;
	Bullet bullets[D_BULLET_MAX];
	Enemy Enemys[D_ENEMY_MAX];
	Effect Effects[D_EFFECT_MAX];

	Score score;
	GameTime gametime;

	void Update();
	void Draw();

	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);

	void smash();
	void CreateEffect(int x, int y);

	bool gamePlayTimeCheck();
	void TimeOver();
};

extern GameMng gamemng;
