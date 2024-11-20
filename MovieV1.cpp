#include <iostream>

using namespace std;

int main() 
{
    int age;
    bool with_parent;
    double money;
    
    cout << "Enter age: ";
    cin >> age;
    cout << "Are you with a parent? (1 for Yes, 0 for No): ";
    cin >> with_parent;
    cout << "Enter amount of money: ";
    cin >> money;

	cout << "You can watch movies with ratings: ";
    if (age < 13) {
        if (with_parent) {
            cout << "G, PG";
        } else {
            cout << "G";
        }
	} else if (age >= 13 && age < 16) {
        if (with_parent) {
            cout << "G, PG, R";
        } else {
            cout << "G, PG";
        }
    } else {
        cout << "G, PG, R";
    }
    cout << endl;

    if (money >= 10.5) {
        cout << "You can watch at Matinee or Evening." << endl;
    } else if (money >= 7.5) {
        cout << "You can only watch at Matinee." << endl;
    } else {
        cout << "Not enough money for a ticket." << endl;
    }
    return 0;
}