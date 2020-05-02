#pragma once
#include<iostream>
#include<string>

class Wall
{
private:
	std::string wallDescription;
public:
	Wall()
	{
		wallDescription = "";
	}
	Wall(std::string description)
	{
		wallDescription = description;
	}

	virtual void interact()
	{
		std::cout << "This is a wall" << std::endl;
	}

	void setWallDescription(std::string description)
	{
		wallDescription = description;
	}

	std::string getWallDescription()
	{
		return wallDescription;
	}
};

