#pragma once

class CStateCtrl
{
public:
	CState* m_pCurState;	
	CState* temp;// ���� state
	//CState* m_pPrevState;			// �� state

	//CState* m_pStates[E_STATE_MAX];
	
public:
	CStateCtrl();
	~CStateCtrl();

public:
	//void Init();
	//bool StateAdd(int nIndex, CState* pState);
	//bool StateRelease(int nIndex);
	bool StateChange(CState* state);

public:
	void Update();
	void Draw();
};