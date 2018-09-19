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

Board::Board()
{
	for (int r = 0; r < get_rows(); r++)
	{
		for (int c = 0; c < get_cols(); c++)
			arr_[r][c] = SquareType::Empty;
	}
}

SquareType Board::get_square_value(Position pos) const
{
	if (pos.row == -1 && pos.col == -1)
		return SquareType::Wall; // returns invalid place to move, (-1,-1) represents invalid square
	return arr_[pos.row][pos.col];
}

void Board::SetSquareValue(Position pos, SquareType value)
{
	arr_[pos.row][pos.col] = value;
}

std::vector<Position> Board::GetMoves(Player* p)
{
	std::vector<Position> possibilities; // List of all possible positions, will be returned at end
	Position playerPosition = p->get_position(); // Player's current position
	
	Position north, south, east, west; // Possible places player can good
	
	// Set north to be above player (can include negitive numbers to represent off the board)
		north = playerPosition;
		north.row --;
	
	// Set south to be above player (can include negitive numbers to represent off the board)
		south = playerPosition;
		north.row ++;
	
	// Set east to be above player (can include negitive numbers to represent off the board)
		east = playerPosition;
		east.col ++;
	
	// Set west to be above player (can include negitive numbers to represent off the board)
		west = playerPosition;
		west.col --;
	
	// Test to see if positions are valid, if not set to -1,-1 for invalid
		if (north.row == -1)
			north.col = -1;
		if (south.row == get_rows())
		{
			south.row = -1;
			south.col = -1;
		}
		if (east.col == get_cols())
		{
			east.row = -1;
			east.col = -1;
		}
		if (west.col == -1)
			west.row = -1;
	// Test to see if positions contain wall, if not, then does add to possibilities
		if (get_square_value(north) != SquareType::Wall)
			possibilities.push_back(north);
		
		if (get_square_value(south) != SquareType::Wall)
			possibilities.push_back(south);
		
		if (get_square_value(east) != SquareType::Wall)
			possibilities.push_back(east);
		
		if (get_square_value(west) != SquareType::Wall)
			possibilities.push_back(west);
			
	return possibilities;
}

bool Board::MovePlayer(Player* p, Position pos)
{
	std::vector<Position> possibilities = GetMoves(p);
	unsigned int i = 0;
	bool valid = false;
	Position move;
	
	while (i < possibilities.size())
	{
		if (pos == possibilities[i])
		{
			valid = true;
			move = possibilities[i];
		}
	}
	
	if (valid)
		p->SetPosition(move);
	
	return valid;	
}

SquareType Board::GetExitOccupant()
{
	return arr_[get_rows()][get_cols()];
}

#endif






