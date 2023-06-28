#include <iostream>
using namespace std;

int main()
{
    cout << "Program Switch Case\n\n\n";

    int pilihan;

    cout << "Pilih angka 1-3: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "Anda memilih angka 1" << endl;
        break;
    case 2:
        cout << "Anda memilih angka 2" << endl;
        break;
    case 3:
        cout << "Anda memilih angka 3" << endl;
        break;
    default:
        cout << "Angka yang Anda masukkan tidak valid" << endl;
        break;
    }

    cout << "Program Selesai" << endl;
    return 0;
}
