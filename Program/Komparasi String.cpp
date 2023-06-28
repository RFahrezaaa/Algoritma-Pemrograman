#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program KOmparasi String\n\n\n";

	string input;
	string kata_rahasia("Hello");

	while (true)
	{
		cout << "tebak kata: ";
		cin >> input;
		if (input == kata_rahasia)
		{
			cout << "Anda benar" << endl;
			break;
		}
		cout << "Anda salah" << endl;
	}

	cout << "Program Selesai";

	return 0;
}
