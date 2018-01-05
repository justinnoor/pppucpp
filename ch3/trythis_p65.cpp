#include "std_lib_facilities.h"

using namespace std;

//See the 'Try This' section on p.65 for the instructions.

int main()
{
	cout << "Please enter your first name and age\n";
	string first_name;
	int age;
	cin >> first_name;
	cin >> age;
	cout << "Hello, " << first_name << " (age"<< age <<")\n";

	return 0;
}

