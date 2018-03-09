#include "std_lib_facilities.h"

using namespace std;

//Write a program that tests an integer value to determine whether - 
//or not it is an even or odd number.

int main()
{

    int val1;

    cout << "Please enter a number :\n";
    cin >> val1;

    if (val1 % 2 == 0)
        cout << val1 << " is an even number\n";
    else
        cout << val1 << " is not an even number\n";

	return 0;
}

