#include <iostream>

using namespace std;

int main() 
{
    int rows;
    cout << "Enter the number of rows (1-8): ";
    cin >> rows;

    if (rows >= 1 && rows <= 8) {
        for (int i = rows; i >= 1; i--) { 
            for (int j = rows; j >= 1; j--) 
                cout << (j <= i ? "# " : "  ");
            cout << endl;
        }
    } 

    return 0;
}






