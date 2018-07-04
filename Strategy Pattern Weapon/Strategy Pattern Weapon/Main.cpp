#include<iostream>
#include<cstdlib>
#include"Character.h"
using namespace std;
int main()
{
	Character *c1, *c2 , *c3 , *c4;
	c1 = new King();
	c1->fight();

	c2 = new Queen();
	c2->fight();

	c3 = new Knight();
	c3->fight();

	c4 = new Troll();
	c4->fight();

	c1->setWeapon(new BowAndArrowBehavior());
	c2->setWeapon(new SwordBehavior());

	c1->fight();
	c2->fight();

	delete c1, c2, c3, c4;

	system("pause");
	return 0;
}