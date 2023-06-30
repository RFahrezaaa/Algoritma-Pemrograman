#include <iostream>
using namespace std;

int main()
{
    cout << "Program Penjumlahan Matriks\n\n\n";

    int baris, kolom;

    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;

    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    int matriks1[baris][kolom], matriks2[baris][kolom], hasil[baris][kolom];

    cout << "\nMasukkan elemen-elemen matriks pertama:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Matriks1[" << i << "][" << j << "]: ";
            cin >> matriks1[i][j];
        }
    }

    cout << "\nMasukkan elemen-elemen matriks kedua:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Matriks2[" << i << "][" << j << "]: ";
            cin >> matriks2[i][j];
        }
    }

    cout << "\nHasil penjumlahan matriks:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
