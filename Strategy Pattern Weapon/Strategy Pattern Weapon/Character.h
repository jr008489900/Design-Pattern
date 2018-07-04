#pragma once
#include"WeaponBehavior.h"
#include<string>
using namespace std;

class Character
{
public:
	Character();
	~Character()
	{
		delete wb;
	}
	void setWeapon(WeaponBehavior* w) { delete wb; this->wb = w; }
	void fight();
protected:
	int damage;
	string career;
	WeaponBehavior* wb;
};

class King : public Character
{
public:
	King()
	{
		career = "King";
		wb = new AxeBehavior();
	}
};

class Queen : public Character
{
public:
	Queen()
	{
		career = "Queen";
		wb = new BowAndArrowBehavior();
	}
};

class Knight :public Character
{
public:
	Knight()
	{
		career = "Knight";
		wb = new SwordBehavior();
	}
};

class Troll : public Character
{
public:
	Troll()
	{
		career = "Troll";
		wb = new KnifeBehavior();
	}
};

