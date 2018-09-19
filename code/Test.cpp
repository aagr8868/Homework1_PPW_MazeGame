#include "Maze.cpp"

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
	
	Board myBoad;
	Position myPos;
	
	myPos.row = 0;
	myPos.col = 0;
	myBoad.SetSquareValue(myPos, D);
	
	myPos.row = 3;
	myPos.col = 3;
	myBoad.SetSquareValue(myPos, B);
	
	myPos.row = 2;
	myPos.col = 1;
	myBoad.SetSquareValue(myPos, E);
	
	myPos.row = 3;
	myPos.col = 0;
	myBoad.SetSquareValue(myPos, A);
	
	myPos.row = 1;
	myPos.col = 1;
	myBoad.SetSquareValue(myPos, F);
	
	
	for (int r = 0; r < myBoad.get_rows(); r++)
	{
		for (int c = 0; c < myBoad.get_cols(); c++)
		{
			Position pos;
			pos.row = r;
			pos.col = c;
			cout << SquareTypeStringify(myBoad.get_square_value(pos)) << " ";
		}
		cout << endl;
	}
	
	return 0;
}
