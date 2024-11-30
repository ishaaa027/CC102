#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows (1-8): ";
    cin >> rows;

    if (rows >= 1 && rows <= 8) {
        for (int i = 1; i <= rows; i++) {
            for (int j = i; j >= 1; j--) {
                cout << j << " ";
            }
            cout << endl;
        }
    } 

    return 0;
}

