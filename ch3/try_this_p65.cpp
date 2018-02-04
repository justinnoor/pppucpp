#include "std_lib_facilities.h"

using namespace std;

//'Try This' exercise p.65

int main()
{
	cout << "Please enter your first name and age\n";
	string first_name;
	double age;
	cin >> first_name;
	cin >> age;
	cout << "Hello, " << first_name << "!" << " (age: "<< age * 12 <<" months)\n";

	return 0;
}

