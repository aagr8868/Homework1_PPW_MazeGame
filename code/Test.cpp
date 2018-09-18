#include "Player.cpp"
#include <iostream>

using namespace std;

int main ()
{
	Player P1("Aaron", false);
	Player P2("Perrin", false);
	Player P3("Chris", false);
	Player P4("Dylan", true);

	Player arr[4] = {P1, P2, P3, P4};

	for (int i = 0; i < 3; i++)
	{
		cout << i << endl;
		cout << arr[i].Stringify() << endl;;
	}
	return 0;
}
