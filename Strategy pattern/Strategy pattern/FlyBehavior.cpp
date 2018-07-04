#include<iostream>
#include "FlyBehavior.h"

using namespace std;

FlyBehavior::FlyBehavior()
{
}


FlyBehavior::~FlyBehavior()
{
}

FlyWithWings::FlyWithWings()
{
}

FlyWithWings::~FlyWithWings()
{
}

void FlyWithWings::fly()
{
	cout << "I'm flying!!" << endl;
}

FlyNoWay::FlyNoWay()
{
}

FlyNoWay::~FlyNoWay()
{
}

void FlyNoWay::fly()
{
	cout << "I can't fly!!" << endl;
}
