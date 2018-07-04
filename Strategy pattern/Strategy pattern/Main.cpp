#include<iostream>
#include<cstdlib>
#include"Duck.h"
using namespace std;

int main()
{
	Duck* ptr1;
	Duck* ptr2;
	ptr1 = new ModelDuck();
	ptr2 = new RedheadDuck();
	ptr1->display();
	ptr1->performFly();
	ptr1->perfomrQuack();
	cout << endl;
	ptr2->display();
	ptr2->performFly();
	ptr2->perfomrQuack();


	system("pause");
	return 0;
}