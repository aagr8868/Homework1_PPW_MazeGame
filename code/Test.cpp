#include "Player.cpp"
#include <iostream>

using namespace std;

int main ()
{
	Player P1("Aaron", false);
	Player P2("Perrin", false);
	Player P3("Chris", false);
	Player P4("Dylan", true);

	Position PP;

	Player arr[4] = {P1, P2, P3, P4};

	for (int i = 0; i < 3; i++)
	{
		PP = arr[i].get_position();

		cout << "Starting Name: " << arr[i].get_name() << endl;
		cout << "Starting Points: " << arr[i].get_points() << endl;
		cout << "Starting Position:" << PP.row << "," << PP.col << endl;
		cout << "Starting Humanity: ";

		if (arr[i].is_human())
			cout << "TRUE";
		else
			cout << "FALSE";
		cout << endl;
	}
	return 0;
}
