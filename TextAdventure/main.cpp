#include <iostream>
#include <string>
#include "Room.h"

char getInput();

int main()
{
	std::cout << "Hello and welcome to the Text Adventure!" << std::endl;
	std::cout << "Use wasd to navigate through the rooms\n\n" << std::endl;
	std::cout << "To quit type q and enter" << std::endl;

	Room Maze[4];
	int RoomID = 0;

	char command = 'm';
	while (command != 'q')
	{
		Maze[RoomID].getDescription();
		command = getInput();
		Maze[RoomID].interactWithWall(command);
	}
}

char getInput()
{
	char input;

	std::cout << "Where would you like to go?" << std::endl;
	std::cin >> input;
	return input;
}

