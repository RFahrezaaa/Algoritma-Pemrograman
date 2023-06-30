#include <iostream>
using namespace std;

int main()
{
    cout << "Program If Else\n\n\n";

    int x = 10;

    // Contoh if statement
    if (x > 5)
    {
        cout << "Nilai x lebih besar dari 5" << endl;
    }

    // Contoh if-else statement
    if (x > 15)
    {
        cout << "Nilai x lebih besar dari 15" << endl;
    }
    else
    {
        cout << "Nilai x tidak lebih besar dari 15" << endl;
    }

    // Contoh if-else if-else statement
    if (x > 20)
    {
        cout << "Nilai x lebih besar dari 20" << endl;
    }
    else if (x > 10)
    {
        cout << "Nilai x lebih besar dari 10" << endl;
    }
    else
    {
        cout << "Nilai x tidak lebih besar dari 10" << endl;
    }

    return 0;
}
