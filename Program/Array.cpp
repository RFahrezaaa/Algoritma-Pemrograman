#include <iostream>
using namespace std;

int main()
{
    cout << "Program Array\n\n\n";

    // Deklarasi dan inisialisasi array
    int angka[5] = {2, 4, 6, 8, 10};

    // Mengakses elemen array
    cout << "Elemen ke-0: " << angka[0] << endl;
    cout << "Elemen ke-2: " << angka[2] << endl;

    // Mengubah nilai elemen array
    angka[3] = 12;
    cout << "Setelah diubah: " << angka[3] << endl;

    // Menghitung jumlah elemen dalam array
    int jumlah = sizeof(angka) / sizeof(int);
    cout << "Jumlah elemen dalam array: " << jumlah << endl;

    return 0;
}
