#include "Include.h"


CStateCtrl::CStateCtrl()
{
	//Init();
	m_pCurState = nullptr;
	temp = nullptr;
}

CStateCtrl::~CStateCtrl()
{
	//Init();
}

//bool CStateCtrl::StateAdd(int nIndex, CState* pState)
//{
//	if (m_pStates[nIndex] == NULL)
//	{
//		m_pStates[nIndex] = pState;
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//bool CStateCtrl::StateRelease(int nIndex)
//{
//	if (m_pStates[nIndex] != NULL)
//	{
//		//delete m_pStates[nIndex];
//		m_pStates[nIndex] = NULL;
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

bool CStateCtrl::StateChange(CState* state)
{
	CState* pState = state;

	if (pState != NULL)
	{
		if (m_pCurState != NULL)
		{
			m_pCurState->Exit();
			//delete m_pCurState;
			
		}
		////m_pPrevState = m_pCurState;
		//m_pCurState = pState;
		//m_pCurState->Start();
		temp = state;
		return true;
	}
	else
	{
		return false;
	}
}

void CStateCtrl::Update()
{
	if (m_pCurState != NULL)
	{
		m_pCurState->Update();	
	}
	if (temp != nullptr)//업데이트랑 드로우 다 끝나고 스테이트 바꿔줘야함...
	{
		if (m_pCurState != nullptr)
		{
			delete m_pCurState;
		}
		m_pCurState = temp;
		m_pCurState->Start();
		temp = nullptr;
	}
}

void CStateCtrl::Draw()
{
	if (m_pCurState != NULL)
	{
		m_pCurState->Draw();
	}
}

//void CStateCtrl::Init()
//{
//	for (int i = 0; i < E_STATE_MAX; i++)
//	{
//		m_pStates[i] = NULL;
//	}
//}

