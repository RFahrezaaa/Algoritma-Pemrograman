#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Program Operasi String\n\n\n";

	string kata = "Hello";

	// Mengambil karaktere berdasrkan index
	cout << "Index ke 1: " << kata[1] << endl;
	cout << "Index ke 2: " << kata[2] << endl;

	// Merubah Karakter Pada index
	kata[1] = 'a';
	cout << kata << endl;

	// Meenyambung
	string kata2(kata + " guys");
	cout << kata << endl;

	string kata3("hehehe");
	kata2.append(" " + kata3);
	cout << kata2 << endl;

	string kata4("hohoho");
	kata2 += " " + kata4;
	cout << kata2 << endl;

	return 0;
}
