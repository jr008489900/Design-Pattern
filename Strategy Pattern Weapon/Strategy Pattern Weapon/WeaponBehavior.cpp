#include "WeaponBehavior.h"
#include<iostream>
using namespace std;



WeaponBehavior::WeaponBehavior()
{
}


WeaponBehavior::~WeaponBehavior()
{
}

void KnifeBehavior::useWeapon()
{
	cout << "the knife causes the damage." << endl;
}

void BowAndArrowBehavior::useWeapon()
{
	cout << "The bow and arrow causes the damage." << endl;
}

void AxeBehavior::useWeapon()
{
	cout << "the axe causes the damage." << endl;
}

void SwordBehavior::useWeapon()
{
	cout << "the sword causes the damage." << endl;
}
