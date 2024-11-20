#include <iostream>

using namespace std;

int main()
{
	float age;
	
	cout << "How old are you?" ;
	cin >> age;
	
	if (age < 16) {
		cout << "Too young to drive." << endl;
	}
	else if (age == 16) {
		cout << "Better clear the road." << endl;
	}
	else if (age > 16) {
		cout << "Your getting pretty old.";
	}
	return 0;
}
