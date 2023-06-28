#include <iostream>
using namespace std;

int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

void tampilkan(int input)
{
    cout << "Menampilkan dengan void\n";
    cout << input << endl;
}

int main(int argc, char const *argv[])
{
    cout << "Program Fungsi Void\n\n\n";

    int input, hasil, a, b, hasil2;
    cout << "Nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    return 0;
}
