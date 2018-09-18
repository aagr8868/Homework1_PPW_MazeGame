#ifndef _PLAYER_CPP
#define _PLAYER_CPP

#include "Player.h"
#include <cstdlib>
#include <ctime>

Player::Player(const std::string name, const bool is_human)
{
	name_ = name;
	points_ = 0;
	pos_.row = 0;
	pos_.col = 0;
	is_human_ = is_human;
	
	srand(time(0));

	if (!is_human)
	{
		do
		{
			pos_.row = rand() % 4 + 1;
			pos_.col = rand() % 4 + 1;
		}while (pos_.row == 0 && pos_.col == 0);
	}
}

void Player::ChangePoints(const int x)
{
	
}

#endif //_PLAYER_CPP
