#pragma once
class WeaponBehavior
{
public:
	WeaponBehavior();
	~WeaponBehavior();
	virtual void useWeapon()=0;
};

class KnifeBehavior :public WeaponBehavior
{
public:
	virtual void useWeapon();
};

class BowAndArrowBehavior : public WeaponBehavior
{
public:
	virtual void useWeapon();
};

class AxeBehavior : public WeaponBehavior
{
public:
	virtual void useWeapon();
};

class SwordBehavior : public WeaponBehavior
{
public:
	virtual void useWeapon();
};

