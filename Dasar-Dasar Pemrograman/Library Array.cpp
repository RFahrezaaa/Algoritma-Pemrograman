#include <iostream>
using namespace std;

int main()
{
    cout << "Program Menggunakan Library Standard Array\n\n\n";

    int nilai[] = {10, 20, 30, 40, 50};
    int panjang = sizeof(nilai) / sizeof(nilai[0]);

    // Menggunakan panjang array
    cout << "Panjang array: " << panjang << endl;

    // Menggunakan alamat awal dan akhir
    cout << "Alamat awal array: " << &nilai[0] << endl;
    cout << "Alamat akhir array: " << &nilai[panjang - 1] << endl;

    // Menggunakan indeks untuk mengakses nilai
    cout << "Nilai pada indeks 2: " << nilai[2] << endl;
    cout << "Nilai pada indeks 4: " << nilai[4] << endl;

    return 0;
}
