#pragma once
class ConcreteSubscriber : public ISubscriber
{
public:
	void update(char *name, char *article) override;
};
#include "ConcreteSubscriber.cpp"
