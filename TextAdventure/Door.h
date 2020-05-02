#pragma once
#include "Wall.h"
class Door :
	public Wall
{
private:
	bool Locked;
	int keyID;
public:
	virtual void interact();

	bool isDoorLocked();
	void unlockDoorWithKey(int someKeyID);
};

