#include "Character.h"
#include<iostream>
using namespace std;


Character::Character()
{
}

void Character::fight()
{
	cout << career << ": ";
	wb->useWeapon();
}

