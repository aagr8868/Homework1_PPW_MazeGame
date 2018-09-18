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
	
}

#endif //_PLAYER_CPP
