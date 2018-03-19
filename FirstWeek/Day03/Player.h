#pragma once

// Mutual Reference
//#include "Monster.h"

// Forward Declarations
// Only notify this class exists
// Do not aware of size, use pointer
class CMonster;

class CPlayer
{
public:
	void Init();

private:
	CMonster* m_monster;
};