#include <iostream>
using namespace std;

int main()
{
    cout << "Program Increment & Decrement\n\n\n";

    int angka1 = 100;
    int angka2 = 100;
    int angka3 = 100;
    int angka4 = 100;

    // Increment = Menaikkan nilai angka sebesar 1
    angka1++; // setelah digunakan
    cout << "Nilai angka setelah increment: " << angka1 << endl;
    ++angka2; // sebelum digunakan
    cout << "Nilai angka setelah increment: " << angka2 << endl;

    // Decrement = Menurunkan nilai angka sebesar 1
    angka3--; // setelah digunakan
    cout << "Nilai angka setelah decrement: " << angka3 << endl;
    --angka4; // sebelum digunakan
    cout << "Nilai angka setelah decrement: " << angka4 << endl;
    return 0;
}
