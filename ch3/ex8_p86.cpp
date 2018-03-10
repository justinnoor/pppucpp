#include "std_lib_facilities.h"

using namespace std;

//Chapter 3 Ex.8 Pg.86
//Write a program that tests an integer value to determine whether - 
//or not it is an even or odd number.

int main()
{

    int val_1;

    cout << "Please enter a number:\n";
    cin >> val_1;

    if(val_1 % 2 == 0)
        cout << val_1 << " is an even number\n";
    else
        cout << val_1 << " is an odd number\n";

	return 0;
}

