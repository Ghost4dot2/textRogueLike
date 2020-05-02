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
	Room* roomArray;
	int numberOfRooms;
	int currentRoom;

	char getInput();
public:
	Maze()
	{
		roomArray = NULL;
		numberOfRooms = 0;
		currentRoom = 0;
	}
	Maze(int howManyRooms)
	{
		roomArray = new Room[howManyRooms];
		numberOfRooms = howManyRooms;
		currentRoom = 0;
	}
	void traverseMaze();
	Room* getRoom(int index);



};

