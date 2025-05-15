#pragma once



class Effect: public Unit
{
public:

	int index;
	DWORD indexUpdateTime;

	Effect();
	~Effect();

	
	void Update() override;
	void Draw() override;
	
	void Disable() override;
	
	//void CreateEffect(int x, int y);
};
