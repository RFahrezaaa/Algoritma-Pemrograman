#include <iostream>
using namespace std;

int main()
{
	cout << "Program Operator Logika\n\n\n";

	int a = 10;
	int b = 5;

	bool hasil;

	// T = True
	// F = False

	cout << "\nHasil Operasi AND\n";
	// AND = Kedua nilai true untuk menghasilkan true
	// Dapat menggunakan "and" atau "&&"

	hasil = (a == 10) and (b == 5); // T & T
	cout << hasil << endl;
	hasil = (a == 1) and (b == 5); // F & T
	cout << hasil << endl;
	hasil = (a == 10) && (b == 50); // T & F
	cout << hasil << endl;
	hasil = (a == 1) && (b == 50); // F & F
	cout << hasil << endl;

	cout << "\nHasil Operasi OR\n";
	// OR = Minimal satu nilai true untuk menghasilkan true
	// Dapat menggunakan "or" atau "||"

	hasil = (a == 10) or (b == 5); // T & T
	cout << hasil << endl;
	hasil = (a == 1) or (b == 5); // F & T
	cout << hasil << endl;
	hasil = (a == 10) || (b == 50); // T & F
	cout << hasil << endl;
	hasil = (a == 1) || (b == 50); // F & F
	cout << hasil << endl;

	cout << "\nHasil Operasi NOT\n";
	// NOt = Hasil merupakan kkkebalikan nilainya
	// Dapat menggunakan "not" atau "!"

	hasil = not(a == 10); // T
	cout << hasil << endl;
	hasil = !(a == 1); // F
	cout << hasil << endl;

	return 0;
}