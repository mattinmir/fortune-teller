#include <iostream>

using namespace std;

int main()
{
	int secretNumber = 150;
	int guess = 0;
	while (guess != secretNumber)
	{
		cout << "Make a Guess!" << endl;
		cin >> guess;

		if (guess < secretNumber)
			cout << "Too low!" << endl;
		else if (guess < secretNumber)
			cout << "Too high!" << endl;
		else if (guess == secretNumber)
			cout << "You win!" << endl;

	}
}
