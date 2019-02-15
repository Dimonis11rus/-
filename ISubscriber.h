#pragma once
class ISubscriber
{
public:
	void virtual update(char *, char *) = 0;
};
#include "ConcreteSubscriber.h"
