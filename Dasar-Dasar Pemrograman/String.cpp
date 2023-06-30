#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Program String\n\n\n";

    // Deklarasi dan inisialisasi string
    string nama = "Wulan Dwi Destela";

    // Menampilkan string
    cout << "Nama: " << nama << endl;

    string data;
    cout << "\nMasukkan kata" << endl;
    cin >> data;
    cout << "Kata yang dimasukkan adalah: " << endl;
    cout << data << endl;

    return 0;
}
