#ifndef MAZE_CPP
#define MAZE_CPP

#include "Maze.h"

// source of unicode:
// https://unicode.org/emoji/charts/full-emoji-list.html

std::string SquareTypeStringify(SquareType sq)
{
	if (sq == SquareType::Wall)
		return "\U0000274C";// Cross
	else if (sq == SquareType::Exit)
		return "\U0001F354"; // Burger
	else if (sq == SquareType::Empty)
		return "\U0001F532"; // Square
	else if (sq == SquareType::Human)
		return "\U0001F468"; // Man
	else if (sq == SquareType::Enemy)
		return "\U0001F432"; // Dragon Head
	else if (sq == SquareType::Treasure)
		return "\U0001F4B0"; // Bag of Money
	else
		return "E";
}

#endif