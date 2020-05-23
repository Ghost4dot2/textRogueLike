#pragma once
#include <string>
#include <iostream>
#include "Wall.h"

class Room
{
public:
	enum class Direction { NORTH, SOUTH, EAST, WEST };

	Room()
	{
		description = "An Empty room";
		North = new Wall;
		South = new Wall;
		East = new Wall;
		West = new Wall;
	}
	Room(std::string name, std::string roomDescription) : roomName(name), description(roomDescription)
	{
		North = new Wall;
		South = new Wall;
		East = new Wall;
		West = new Wall;
	}

	Room(std::string name, std::string roomDescription, Wall* north, Wall* south, Wall* east, Wall* west) :
		roomName(name), description(roomDescription), North(north), South(south), East(east), West(west)
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
	std::string getRoomName();

	Direction getOppositeWall(Direction wallSide);
	
	void setDescription(std::string roomDescription);
	void setRoomName(std::string name);
	void setWallAs(Direction wallSide, Wall* newWall);
	void connectRoom(Direction wallSide, Room* nextRoom);
private:
	std::string roomName;
	std::string description;
	Wall* North;
	Wall* South;
	Wall* East;
	Wall* West;
};

