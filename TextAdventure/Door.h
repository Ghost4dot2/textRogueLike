#pragma once
#include "Wall.h"
#include "Room.h"

enum class SIDE { PUSH, PULL, BROKEN };

class myDoor: public Wall
{
private:
	Room* pushRoom;
//	Room* pullRoom;
	SIDE theSide;
public:

	myDoor() 
	{
		pushRoom = NULL;
		theSide = SIDE::PUSH;
	}
//		: Wall(), pushRoom(NULL), pullRoom(NULL), theSide(SIDE::BROKEN)
//	{
//	}
//	myDoor(std::string doorDescription, Room* thePushRoom, Room* thePullRoom, SIDE sideOfDoor)
//		: Wall(doorDescription), pushRoom(thePullRoom), pullRoom(thePullRoom), theSide(sideOfDoor)
//	{}

//	virtual void interact();

//	void goThroughDoor();
//	void setPushRoom(Room* thePushRoom);
//	void setPullRoom(Room* thePullRoom);
};

