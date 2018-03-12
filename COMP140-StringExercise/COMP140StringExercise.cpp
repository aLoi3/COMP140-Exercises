// COMP140StringExercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <sstream>

class CharacterStats
{
public:
	CharacterStats()
	{
		Name = "Name";
		Age = 10;
		Health = 19;
		Score = 0;
	}
	~CharacterStats()
	{

	}
	std::string getName()
	{
		return Name;
	}

	int getAge()
	{
		return Age;
	}

	int getHealth()
	{
		return Health;
	}

	int getScore()
	{
		return Score;
	}

private:
	//Everything public! Bad, make sure its private
	//and we use functions to access!
	std::string Name;
	int Age;
	int Health;
	int Score;

};


int main()
{
	//Create an instance of CharacterStats
	std::stringstream stringStream;
	
	stringStream << "Brian \n";
	stringStream << 30 << "\n";
	stringStream << 100 << "\n";
	stringStream << 0 << "\n";

	std::string name;
	int age, health, score;
	stringStream >> name >> age >> health >> score;

	std::string s = stringStream.str();

	//Build a string to represent the character - to_string - http://www.cplusplus.com/reference/string/to_string/
	std::string characterString = "Name: " + name + "\n" + "Age: " + std::to_string(age) + "\n" + "Health: " + std::to_string(health) + "\n" + "Score: " + std::to_string(score);

	//Print out the string
	std::cout << "Character Details" << std::endl;
	std::cout << "=================" << std::endl;
	std::cout << characterString << std::endl;
	system("pause");
    return 0;
}

