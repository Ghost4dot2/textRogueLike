#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<iterator>
#include<map>

#include "Room.h"
class Maze
{
private:
	std::map<std::string, Room> RoomMap;
	int numberOfRooms;
	std::string currentRoom;

	char getInput();
public:
	Maze()
	{
		numberOfRooms = 0;
		currentRoom = "";
	}

	void traverseMaze();
	Room getRoom(std::string roomName);
	void addRoom(std::string name, std::string description);
	void addRoom(Room* aRoom);


};

