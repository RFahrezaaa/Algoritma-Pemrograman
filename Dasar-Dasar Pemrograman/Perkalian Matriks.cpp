#include <iostream>
using namespace std;

int main()
{
    cout << "Program Perkalian Matriks\n\n\n";

    int matriks1[3][3];
    int matriks2[3][3];
    int hasil[3][3];

    // Memasukkan elemen-elemen matriks pertama
    cout << "Masukkan elemen-elemen matriks pertama:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriks1[" << i << "][" << j << "]: ";
            cin >> matriks1[i][j];
        }
    }

    // Memasukkan elemen-elemen matriks kedua
    cout << "Masukkan elemen-elemen matriks kedua:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriks2[" << i << "][" << j << "]: ";
            cin >> matriks2[i][j];
        }
    }

    // Melakukan perkalian matriks
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            hasil[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }

    // Menampilkan hasil perkalian matriks
    cout << "\nHasil perkalian matriks:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
