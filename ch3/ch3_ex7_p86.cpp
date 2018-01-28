#include "std_lib_facilities.h"

using namespace std;

//This program modifies 'ch3_ex6_p86.cpp', using string values -
//inteads of ints.

int main()
{

    string val1;
    string val2;
    string val3;

    cout << "Please enter three words:\n";
    cin >> val1 >> val2 >> val3;

    if (val1 <= val2 && val1 <= val3 && val2 <= val3)
        cout << val1 << ", " << val2 << ", " << val3 << "\n";
    else if (val1 <= val2 && val1 <= val3 && val3 <= val2)
        cout << val1 << ", " << val3 << ", " << val2 << "\n";

    else if (val2 <= val1 && val2 <= val3 && val1 <= val3)
        cout << val2 << ", " << val1 << ", " << val3 << "\n";
    else if (val2 <= val1 && val2 <= val3 && val1 >= val3)
        cout << val2 << ", " << val3 << ", " << val1 << "\n";

    else if (val3 <= val1 && val3 <= val2 && val1 <= val2)
        cout << val3 << ", " << val1 << ", " << val2 << "\n";
    else if (val3 <= val1 && val3 <= val2 && val1 >= val2)
        cout << val3 << ", " << val2 << ", " << val1 << "\n";

	return 0;
}

