#pragma once
class FlyBehavior
{
public:
	FlyBehavior();
	~FlyBehavior();

	virtual void fly() = 0;
};

class FlyWithWings : public FlyBehavior
{
public:
	FlyWithWings();
	~FlyWithWings();
	void fly();
};

class FlyNoWay : public FlyBehavior
{
public:
	FlyNoWay();
	~FlyNoWay();
	void fly();

};

