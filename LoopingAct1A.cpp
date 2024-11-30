#include <iostream>

using namespace std;

int main() 
{
    int rows = 8;
    int cols = 8;

      for (int i = 1; i <= rows; i++) {
        if (i % 2 == 1) {
            cout << " "; 
        }
        for (int j = 1; j <= cols; j++) {
            cout << (j % 2 == 1 ? "# " : "* ");
        }
        cout << endl;
    }

    return 0;
}
