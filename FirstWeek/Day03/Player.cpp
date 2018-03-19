#include "Player.h"
// When use Forward Declaration include header file to cpp
#include "Monster.h"

void CPlayer::Init()
{
	m_monster = new CMonster;
}