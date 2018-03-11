#include "std_lib_facilities.h"

using namespace std;

//Chapter 3, Try This, Page 65
//Get the name and age example to work, and then modify it so that - 
//it writes out the age in months. Read the age variable into a double.

int main()
{
	string first_name;
	double age;

	cout << "Please enter your first name and age:\n";

	cin >> first_name;
	cin >> age;

	cout << "Hello, " << first_name << "!" 
         << " (age: "<< age * 12 <<" months)\n";

	return 0;
}

