#include <iostream>

using namespace std;
int main()
{
	int age;
	cout << "Enter age: " << endl;
	cin >> age;

	int fortune_value = age % 5;

	
	if (fortune_value == 0)
		cout << "Fortune 0" << endl;
	if (fortune_value == 1)
		cout << "Fortune 1" << endl;
	if (fortune_value == 2)
		cout << "Fortune 2" << endl;
	if (fortune_value == 3)
		cout << "Fortune 3" << endl;
	if (fortune_value == 4)
		cout << "Fortune 4" << endl;


	getchar();
}
