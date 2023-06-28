#include <iostream>
using namespace std;

int main()
{
    cout << "Program Operator Aritmatika\n\n\n";

    int angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    int tambah = angka1 + angka2;
    int kurang = angka1 - angka2;
    int kali = angka1 * angka2;
    int bagi = angka1 / angka2;
    int modulus = angka1 % angka2;

    cout << "Hasil penjumlahan: " << tambah << endl;
    cout << "Hasil pengurangan: " << kurang << endl;
    cout << "Hasil perkalian: " << kali << endl;
    cout << "Hasil pembagian: " << bagi << endl;
    cout << "Sisa hasil bagi: " << modulus << endl;

    return 0;
}
