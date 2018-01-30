#include "std_lib_facilities.h"

using namespace std;

//Write a program that tests an integer value to determine whether - 
//or not it is an even or odd number.

int main()
{

    string val1;

    cout << "Please spell out a number :\n";
    cin >> val1;

    if (val1 == "zero")
        cout << "0\n";
    else if (val1 == "one")
        cout << "1\n";
    else if (val1 == "two")
        cout << "2\n";
    else if (val1 == "three")
        cout << "3\n";
    else if (val1 == "four")
        cout << "4\n";
    else
	    cout << "Sorry, " << val1 << " is not a number I know :(\n";

	return 0;
}

