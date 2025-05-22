#pragma once
class MenuState : public CState
{
public:
	MenuState();
	~MenuState();

	void Start() override;
	void Update() override;
	void Draw() override;
	void Exit() override;
};
