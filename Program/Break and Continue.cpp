#include <iostream>
using namespace std;

int main()
{
    cout << "Program Break dan Continue\n\n\n";

    cout << "Contoh penggunaan break:\n";
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break; // Keluar dari loop jika i = 3
        }
        cout << "Angka ke-" << i << endl;
    }
    cout << "Setelah loop break\n\n";

    cout << "Contoh penggunaan continue:\n";
    for (int j = 1; j <= 5; j++)
    {
        if (j == 3)
        {
            continue; // Lanjut ke iterasi berikutnya jika j = 3
        }
        cout << "Angka ke-" << j << endl;
    }
    cout << "Setelah loop continue\n";

    return 0;
}
