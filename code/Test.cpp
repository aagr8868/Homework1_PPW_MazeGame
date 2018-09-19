#include "Player.cpp"
#include "Maze.cpp"
#include <iostream>

using namespace std;

int main ()
{
	SquareType A, B, C, D, E, F;

	A = SquareType::Wall;
	B = SquareType::Exit;
	C = SquareType::Empty;
	D = SquareType::Human;
	E = SquareType::Enemy;
	F = SquareType::Treasure;
	
	cout << "A: " << SquareTypeStringify (A) << endl;
	cout << "B: " << SquareTypeStringify (B) << endl;
	cout << "C: " << SquareTypeStringify (C) << endl;
	cout << "D: " << SquareTypeStringify (D) << endl;
	cout << "E: " << SquareTypeStringify (E) << endl;
	cout << "F: " << SquareTypeStringify (F) << endl;
	
	return 0;
}
