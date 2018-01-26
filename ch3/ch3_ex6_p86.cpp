#include "std_lib_facilities.h"

using namespace std;

//This program modifies 'ch3_ex5_p86.cpp'. It accepts from the user - 
//three integers, and outputs them sequentially with std::cout.
//They must be separated by commas (i.e., 1, 2, 3). Please note this - 
//program is quite verbose because arrays have not been introduced - 
//yet in the book and are , therefore, not included . Technically, I - 
//already cheated by using the logical '&&' operator, as that is not - 
//introduced until chapter 4. Please contact me if you have a cleaner - 
//way of doing this. Basically (and obviously), I isolated the smallest - 
//value, moved it to the left, and worked from there. Thank you.

int main()
{

    int val1;
    int val2;
    int val3;

    cout << "Please enter your numbers:\n";
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

