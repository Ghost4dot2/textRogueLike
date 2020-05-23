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
	if (RoomMap.size() != 0)
	{
		std::cout << "Hello and welcome to the Text Adventure!" << std::endl;
		std::cout << "Use wasd to navigate through the rooms\n\n" << std::endl;
		std::cout << "To quit type q and enter" << std::endl;

		char command = 'm';
		while (command != 'q')
		{
			RoomMap[this->currentRoom].getDescription();
			command = getInput();
			RoomMap[this->currentRoom].interactWithWall(command);
		}
	}
	else
	{
		std::cout << "No rooms were created for the maze" << std::endl;
	}
}


Room Maze::getRoom(std::string roomName)
{
	std::map<std::string, Room>::iterator it;
	it = RoomMap.find(roomName);
	if (it != RoomMap.end())
		return it->second;

}

void Maze::addRoom(std::string name, std::string description)
{
	Room* aNewRoom = new Room(name, description);
	this->addRoom(aNewRoom);
}

void Maze::addRoom(Room* aRoom)
{
	this->RoomMap[aRoom->getRoomName()] = *aRoom;
}
