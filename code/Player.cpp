#ifndef _PLAYER_CPP
#define _PLAYER_CPP

#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int RandomNumber(int min, int max)
{
	int x;
	std::cout << "Enter a whole number" << std::endl;
	std::cin >> x; // Used to stall for time, does nothing in the code itself
	
	srand(time(NULL));

	 x = (rand() % max) + min; // creates random number

	return x;
}

Player::Player(const std::string name, const bool is_human)
{
	name_ = name;
	points_ = 0;
	pos_.row = 0;
	pos_.col = 0;
	is_human_ = is_human;
	
	if (!is_human)
	{
		do
		{
			pos_.row = RandomNumber(1,4);
			pos_.col = RandomNumber(1,4);
		}while (pos_.row == 0 && pos_.col == 0);
	}
}

void Player::ChangePoints(const int x)
{
	points_ += x;
}

void Player::SetPosition(Position pos)
{
	pos_.row = pos.row;
	pos_.col = pos.col;
}

std::string Player::ToRelativePosition(Position other) // Needs to be Tested
{
	if (other.col == pos_.col && other.row == pos_.row - 1)
		return "North";
	else if (other.col == pos_.col && other.row == pos_.row + 1)
		return "South";
	else if (other.col == pos_.col + 1 && other.row == pos_.row)
		return "East";
	else if (other.col == pos_.col - 1 && other.row == pos_.row)
		return "West";
	else
		return "Invalid";
}

std::string Player::Stringify()
{
	return "Name: " + name_ + " Points: " + std::to_string(points_);
}

#endif //_PLAYER_CPP




