#include <iostream>

using namespace std;
int main()
{
	int age;
	cout << "Enter age: " << endl;
	cin >> age;

	int fortune_value = age % 5;

	switch (fortune_value)
	{
	case 0:
		cout << "Fortune 0" << endl;
		break;
	case 1:
		cout << "Fortune 1" << endl;
		break;
	case 2:
		cout << "Fortune 2" << endl;
		break;
	case 3:
		cout << "Fortune 3" << endl;
		break;
	case 4:
		cout << "Fortune 4" << endl;
		break;
	}

	getchar();
}
