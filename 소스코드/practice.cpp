#if 1

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void) {
	string name;
	int Student_number;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your student number: ";
	cin >> Student_number;

	cout << "NAME: " << name << endl;
	cout << "Student Number: " << Student_number << endl;

	return 0;
}

#endif