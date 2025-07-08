#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name[20], address[20], phone[20];
	int age[20], id[20];

	for (int i = 0; i < 20; i++) {
		cout << "Enter your name: ";
		getline(cin, name[i]);
		cout << "Enter your address: ";
		getline(cin, address[i]);
		cout << "Enter your phone number: ";
		getline(cin, phone[i]);
		cout << "Enter your age: ";
		cin >> age[i];
		cout << "Enter your ID: ";
		cin >> id[i];
		cin.ignore();
	}

	for (int i = 0; i < 20; i++) {
		cout << "Name: " << name[i] << endl;
		cout << "Address: " << address[i] << endl;
		cout << "Phone: " << phone[i] << endl;
		cout << "Age: " << age[i] << endl;
		cout << "ID: " << id[i] << endl;
	}

	return 0;
}
