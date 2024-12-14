#include "stdafx.h"

class CObj
{
public:
	void Print() { cout << "CObj" << endl; }
};

class CPlayer : public CObj
{
public:

	void Print() { cout << "CPlayer" << endl; }

};

class CSubPlayer : public CPlayer
{
public:

	void Print() { cout << "CSubPlayer" << endl; }

};

class CMonster : public CObj
{
public:

	void Print() { cout << "CMonster" << endl; }

};

// Using parent pointer type
void HitDmg(CObj* from, CObj* to);


// Using child pointer type
void HitDmgByPlayer(CPlayer* from, CMonster* to);
void HitDmgByMonster(CMonster* from, CPlayer* to);



int main()
{
	// Why have to use parent pointer?
	// for flexibility -> polymorphism

	CSubPlayer subPlayer;
	CSubPlayer* sub = &subPlayer;
	CPlayer* player = sub;
	CObj* obj = player;

	subPlayer.Print();
	sub->Print();
	player->Print();
	obj->Print();
}