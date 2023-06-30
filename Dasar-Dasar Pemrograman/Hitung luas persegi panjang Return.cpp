#include <iostream>
using namespace std;

// Fungsi menghituang luas persegi panjang
double hitung_luas(double p, double l)
{
    double luas = p * l;
    return luas;
}

// Fungsi menghituang Keliling persegi panjang
double hitung_keliling(double p, double l)
{
    double keliling = 2 * (p + l);
    return keliling;
}

int main()
{
    cout << "Program Fungsi Hitung Persegi Panjang Return\n\n\n";

    double panjang, lebar;
    cout << "Panjang: ";
    cin >> panjang;
    cout << "Lebar: ";
    cin >> lebar;

    cout << "Luasnya adalah: ";
    cout << hitung_luas(panjang, lebar) << endl;
    cout << "Keleilingnya adalah: ";
    cout << hitung_keliling(panjang, lebar) << endl;

    return 0;
}
