#include <iostream>
using namespace std;

// Prosedur: tidak memiliki kembalian
void siswa()
{
	string nama = "Andi";
	string jenis_kelamin = "Lakki laki";
	cout << nama << " adalah seorang " << jenis_kelamin << endl;
}

// Fungsi : Memiliki nilai kembalian
string siswi()
{
	string nama = "Ani";
	string jenis_kelamin = "perempuan";
	return (nama + " adalah seorang " + jenis_kelamin);
}

int main()
{
	cout << "Program Proseedur dan Fungsi\n\n\n";

	siswa();				 // Penulisan Prosedur
	cout << siswi() << endl; // Penulisan FUngsi

	return 0;
}