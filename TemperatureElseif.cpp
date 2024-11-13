#include <iostream>

using namespace std;

int main() 
{
	int temp;
	cout << "Enter the temperature:" ;
	cin >> temp;
	
	if (temp <= 32 ) {
		cout << "Bring a heavy jacket." << endl;
	}
	else if (temp == 32 || temp <=50) {
		cout << "Bring light jacket." << endl;
	}
	else if (temp > 50) {
		cout << "No jacket needed." ;
	}
    return 0;
}