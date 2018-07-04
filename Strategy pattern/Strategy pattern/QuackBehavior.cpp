#include<iostream>
#include "QuackBehavior.h"
using namespace std;


QuackBehavior::QuackBehavior()
{
}


QuackBehavior::~QuackBehavior()
{
}

MuteQuack::MuteQuack()
{
}

MuteQuack::~MuteQuack()
{
}

void MuteQuack::quack()
{
	cout << "<< Silence >>" << endl;
}

Squeak::Squeak()
{
}

Squeak::~Squeak()
{
}

void Squeak::quack()
{
	cout << "Squeak" << endl;
}
