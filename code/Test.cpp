#include "Player.cpp"
#include <iostram>

using namespace std;

int main ()
{
	Player P("Aaron", true);
	Position PP;

	PP = P.get_position();

	
	cout << "Starting Name: " << P.get_name() << endl;
	cout << "Starting Points: " << P.get_points() << endl;
	cout << "Starting Position: " << PP.row << " , " << PP.col << endl;
	cout << "Starting Humanity: ";

	if (P.is_human)
		cout << "TRUE";
	else
		cout << "False";
	cout << endl;

	

	return 0;
}
