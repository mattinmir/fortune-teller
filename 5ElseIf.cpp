#include <iostream>
#include <string>
using namespace std;

int main()
{
	string my_name = "Ahmed";

	if (my_name == "Ahmed")
	{
		cout << "my_name is Ahmed!" << endl;
	}

	else if (my_name == "Moniri")
	{
		cout << "my_name is Moniri!" << endl;
	}

	else if (my_name == "Pooja")
	{
		cout << "my_name is pooja!" << endl;
	}

	else
	{
		cout << "I don't know who you are" << endl;
	}
}
