#pragma once
class QuackBehavior
{
public:
	QuackBehavior();
	~QuackBehavior();
	virtual void quack() = 0;
};

class MuteQuack : public QuackBehavior
{
public:
	MuteQuack();
	~MuteQuack();
	void quack();
};

class Squeak : public QuackBehavior
{
public:
	Squeak();
	~Squeak();
	void quack();
};


