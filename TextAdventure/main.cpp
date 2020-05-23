#include <iostream>
#include <string>
#include "Maze.h"


int main()
{
	Room room1("room1", "The starting room there is nothing here");
	Room room2("room2", "A dusty old room filled with what looks to be the remains of furniture");
	//room1.connectRoom(Room::Direction::NORTH, &room2);
	
	Maze myMaze;
	myMaze.addRoom(&room1);

	myMaze.traverseMaze();

}
