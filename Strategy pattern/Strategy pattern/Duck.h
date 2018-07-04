#pragma once
#include"FlyBehavior.h"
#include"QuackBehavior.h"

class Duck
{
public:
	Duck();
	~Duck();
	virtual void display()=0;
	virtual void performFly() { flyBehavior->fly(); };
	virtual void perfomrQuack() { quackBehavior->quack(); };
	virtual void swim();
	void setFlyBehavior(FlyBehavior* fb) { delete flyBehavior; flyBehavior = fb; }
	void setQuackBehavior(QuackBehavior* qb) { delete quackBehavior;   quackBehavior = qb; }
protected:
	FlyBehavior* flyBehavior;
	
	QuackBehavior* quackBehavior;
};

class ModelDuck : public Duck
{
public:
	ModelDuck();
	~ModelDuck();
	void display();
	
};

class RedheadDuck : public Duck
{
public:
	RedheadDuck();
	~RedheadDuck();
	void display();
};



