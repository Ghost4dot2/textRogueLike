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
	return description;
}

void Room::setDescription(std::string roomDescription)
{
	description = roomDescription;
}

void Room::setWallAs(Direction wallSide, Wall* newWall)
{
	switch (wallSide)
	{
	case Room::Direction::NORTH:
		North = newWall;
		break;
	case Room::Direction::SOUTH:
		South = newWall;
		break;
	case Room::Direction::EAST:
		East = newWall;
		break;
	case Room::Direction::WEST:
		West = newWall;
		break;
	default:
		break;
	}
}

