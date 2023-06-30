#include <iostream>
using namespace std;

int main()
{
    cout << "Program Operator Assignment\n\n\n";

    int x = 100;

    cout << "Nilai awal dari x adalah: " << x << endl;

    x += 7;
    cout << "Ditambah 7 menjadi: " << x << endl;

    x -= 7;
    cout << "Dikurang 7 menjadi: " << x << endl;

    x *= 7;
    cout << "Dikali 7 menjadi: " << x << endl;

    x /= 7;
    cout << "Dibagi 7 menjadi: " << x << endl;

    x %= 7;
    cout << "Dimodulus 7 menjadi: " << x << endl;

    return 0;
}
