#include "std_lib_facilities.h"

using namespace std;

//Chapter 3, Exercise 9, Page 86
//Write a program that converts spelled-out numbers into digits.
//For example, "zero" should be converted to 0. Do this for the - 
//numbers zero, one, two, three, and four.

int main()
{
    string val_1;

    cout << "Please spell out a number\n"
         << "Examples: one, two, three, or four\n";;
    cin >> val_1;

    if(val_1 == "zero")
        cout << "0\n";
    else if(val_1 == "one")
        cout << "1\n";
    else if(val_1 == "two")
        cout << "2\n";
    else if(val_1 == "three")
        cout << "3\n";
    else if(val_1 == "four")
        cout << "4\n";
    else
	    cout << "Sorry, " << val_1 << " is a number that I do not know :(\n";

	return 0;
}

