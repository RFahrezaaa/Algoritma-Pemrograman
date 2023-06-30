#include <iostream>
using namespace std;

int main()
{
    cout << "Program Grafik Nilai\n\n\n";

    const int JUMLAH_SISWA = 5;
    int nilai[JUMLAH_SISWA];

    // Memasukkan nilai siswa
    cout << "Masukkan nilai siswa (0-100):\n";
    for (int i = 0; i < JUMLAH_SISWA; i++)
    {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Membuat grafik nilai
    cout << "\nGrafik Nilai:\n";
    for (int i = 0; i < JUMLAH_SISWA; i++)
    {
        cout << "Siswa ke-" << i + 1 << ":\t";
        for (int j = 0; j < nilai[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
