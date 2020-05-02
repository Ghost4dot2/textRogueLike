#pragma once
#include <string>
#include <iostream>
#include "Wall.h"

class Room
{
	enum class Direction { NORTH, SOUTH, EAST, WEST };

private:
	std::string description;
	Wall* North;
	Wall* South;
	Wall* East;
	Wall* West;
public:
	Room()
	{
		description = "An Empty room";
		North = new Wall;
		South = new Wall;
		East = new Wall;
		West = new Wall;
	}
	Room(std::string roomDescription, Wall* north, Wall* south, Wall* east, Wall* west) :
		description(roomDescription), North(north), South(south), East(east), West(west)
	{}
	~Room()
	{
		delete North;
		delete South;
		delete East;
		delete West;
	}

	void interactWithWall(char interactDirection);
	std::string getDescription();
	
	void setDescription(std::string roomDescription);
	void setWallAs(Direction wallSide, Wall* newWall);
	

};

