#include <iostream>
using namespace std;

//Fungsi menghituang luas persegi panjang
double hitung_luas(double p, double l){
	double luas = p * l;
	return luas;
}

//Fungsi menghituang Keliling persegi panjang
double hitung_keliling(double p, double l){
	double keliling = 2 * ( p + l);
	return keliling;
}

void tampilkan_luas(double p, double l){
	cout << "Menggunakan void\n";
	cout << "Luasnya adalah: ";
	cout << hitung_luas(p,l) << endl;
}

void tampilkan_keliling(double p, double l){
	cout << "Menggunakan void\n";
	cout << "Keleilingnya adalah: ";
	cout << hitung_keliling(p,l) << endl;
}

int main() {
    cout << "Program Fungsi Hitung Persegi Panjang Void\n\n\n";

    double panjang, lebar;
    cout << "Panjang: ";
    cin >> panjang;
    cout << "Lebar: ";
    cin >> lebar;
    
	tampilkan_luas(panjang, lebar);
	tampilkan_keliling(panjang, lebar);
    
    return 0;
}
