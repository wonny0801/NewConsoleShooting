#pragma once
class GameState : public CState
{
public:
	GameState();
	~GameState();

	DWORD enemycooltime;

	Player player;
	Bullet bullets[D_BULLET_MAX];
	Enemy Enemys[D_ENEMY_MAX];
	Effect Effects[D_EFFECT_MAX];

	Score score;
	GameTime gametime;

	void Start() override;
	void Update() override;
	void Draw() override;
	void Exit() override;

	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);

	void smash();
	void CreateEffect(int x, int y);

	bool gamePlayTimeCheck();
	void TimeOver();
};