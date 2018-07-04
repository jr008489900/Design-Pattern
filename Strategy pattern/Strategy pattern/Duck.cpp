#include<iostream>
#include "Duck.h"

Duck::Duck() { flyBehavior = NULL; quackBehavior = NULL; }

Duck::~Duck()
{
	flyBehavior = NULL;
	quackBehavior = NULL;
	delete flyBehavior;
	delete quackBehavior;
}


void Duck::swim()
{
	std::cout << "I'm swimming." << std::endl;
}

ModelDuck::ModelDuck():Duck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new MuteQuack();
}

ModelDuck::~ModelDuck()
{
	
}

void ModelDuck::display()
{
	std::cout << "I'm a model duck!!" << std::endl;
}

RedheadDuck::RedheadDuck():Duck()
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new Squeak();
}

RedheadDuck::~RedheadDuck()
{
}

void RedheadDuck::display()
{
	std::cout << "I'm a RedheadDuck" << std::endl;
}
