#include <Qevent.h>

Qevent(Type type)
{
	this->Type = type;
	this->Flag = 1;
	this->Origin = 1;
}


bool isAccpted() const
{
	return this->Flag;
}


void setAccepted(bool Accepted)
{
	this->Flag = Accepted;
}


void accept()
{
	this->setAccepted(1);
}


void ignore()
{
	this->setAccepted(0);
}


bool spontaneous() const
{
	return this->Origin;
}


Type type() const
{
	return this->Type;
}
