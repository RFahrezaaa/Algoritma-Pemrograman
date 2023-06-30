#include <iostream>
#include <cstdlib> //Mengandung fungsi random
using namespace std;

int main()
{
	cout << "Program Lempar Dadu\n\n\n";

	char lanjut;
	while (true)
	{
		cout << "Lempar dadu? (Y/N)";
		cin >> lanjut;

		if (lanjut == 'Y')
		{
			cout << 1 + (rand() % 6) << endl;
		}
		else if (lanjut = 'N')
		{
			break;
		}
		else
		{
			cout << " Warning: Ketik Y atau N saja!!\n";
		}
	}

	return 0;
}