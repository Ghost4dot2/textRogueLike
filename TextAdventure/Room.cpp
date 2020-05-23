#include "Room.h"

void Room::interactWithWall(char interactDirection)
{
	switch (interactDirection)
	{
	case 'w':
	case 'W':
		this->North->interact();
		break;
	case 's':
	case 'S':
		this->South->interact();
		break;
	case 'a':
	case 'A':
		this->East->interact();
		break;
	case 'd':
	case 'D':
		this->West->interact();
		break;
	default:
		break;
	}
}

std::string Room::getDescription()
{
	return this->description;
}

std::string Room::getRoomName()
{
	return this->roomName;
}

void Room::setDescription(std::string roomDescription)
{
	this->description = roomDescription;
}

void Room::setRoomName(std::string name)
{
	this->roomName = name;
}

Room::Direction Room::getOppositeWall(Room::Direction wallSide)
{
	switch (wallSide)
	{
	case Room::Direction::NORTH:
		return Room::Direction::SOUTH;
		break;
	case Room::Direction::SOUTH:
		return Room::Direction::NORTH;
		break;
	case Room::Direction::EAST:
		return Room::Direction::WEST;
		break;
	case Room::Direction::WEST:
		return Room::Direction::EAST;
		break;
	default:
		break;
	}
}

void Room::setWallAs(Direction wallSide, Wall* newWall)
{
	Wall* temp = NULL;
	switch (wallSide)
	{
	case Room::Direction::NORTH:
		temp = North;
		North = newWall;
		break;
	case Room::Direction::SOUTH:
		temp = South;
		South = newWall;
		break;
	case Room::Direction::EAST:
		temp = East;
		East = newWall;
		break;
	case Room::Direction::WEST:
		temp = West;
		West = newWall;
		break;
	default:
		break;
	}
	if (temp)
		delete temp;
}
/*
void Room::connectRoom(Direction wallSide, Room* nextRoom)
{
	myDoor* DoorTo = new myDoor("Sturdy Oak Door", this, nextRoom, SIDE::PUSH);
	myDoor* DoorFrom = new myDoor("Sturdy Oak Door", this, nextRoom, SIDE::PULL);
	this->setWallAs(wallSide, DoorTo);
	nextRoom->setWallAs(nextRoom->getOppositeWall(wallSide), DoorFrom);
}*/
