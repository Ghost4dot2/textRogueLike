#include "Maze.h"
char Maze::getInput()
{
	char input;

	std::cout << "Where would you like to go?" << std::endl;
	std::cin >> input;
	return input;
}

void Maze::traverseMaze()
{
	if (roomArray)
	{
		std::cout << "Hello and welcome to the Text Adventure!" << std::endl;
		std::cout << "Use wasd to navigate through the rooms\n\n" << std::endl;
		std::cout << "To quit type q and enter" << std::endl;

		char command = 'm';
		while (command != 'q')
		{
			roomArray[this->currentRoom].getDescription();
			command = getInput();
			roomArray[this->currentRoom].interactWithWall(command);
		}
	}
	else
	{
		std::cout << "No rooms were created for the maze" << std::endl;
	}
}


Room* Maze::getRoom(int index)
{
	if (roomArray && index < numberOfRooms)
	{
		return &roomArray[index];
	}
}

