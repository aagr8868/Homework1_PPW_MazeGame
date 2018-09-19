#ifndef MAZE_CPP
#define MAZE_CPP

#include "Maze.h"

std::string SquareTypeStringify(SquareType sq)
{
	if (sq == SquareType::Wall)
		return "X";
	else if (sq == SquareType::Exit)
		return "O";
	else if (sq == SquareType::Empty)
		return "_";
	else if (sq == SquareType::Human)
		return "H";
	else if (sq == SquareType::Enemy)
		return "@";
	else if (sq == SquareType::Treasure)
		return "$";
	else
		return "E";
}

#endif