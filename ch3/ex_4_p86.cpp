#include "std_lib_facilities.h"

using namespace std;

//Chapter 3, Exercise 4, Page 86
//Write a program that prompts the user for two integer values.
//Store them in val_1 and val_2. Determine, and print out the -
//smaller, larger, sum, difference, product, and ratio of these -
//values.

int main()
{
    int val_1;
    int val_2;
    
    cout << "Please enter two numbers:\n";
    cin >> val_1 >> val_2;

    if(val_1 == val_2)
        cout << val_1 << " and " << val_2 << " are equal\n"
             << "The difference between " << val_1 << " - " << val_2
             << " = 0\n";

    else if(val_1 < val_2)
        cout << val_1 << " is smaller than  " << val_2 << '\n'
             << "The difference between " << val_1 << " - " << val_2
             << " = " << val_1 - val_2 << '\n';
    else if(val_1 > val_2)
        cout << val_1 << " is larger than " << val_2 << '\n'
             << "The difference between " << val_1 << " - " << val_2
             << " = " << val_1 - val_2 << '\n';

	cout << "The sum of " << val_1 << " + " << val_2 << " = " << val_1 + val_2 << '\n'
         << "The product of " << val_1 << " * " << val_2 << " = " << val_1 * val_2 << '\n';

    if(val_1 < val_2)
        cout << "The ratio " << val_1 << ":" << val_2 << " = 1:"
             << val_2 / val_1 << '\n';
    else if(val_1 > val_2)
        cout << "The ratio " << val_1 << ":" << val_2 << " = " 
             << val_1 / val_2 << ":1\n";

	return 0;
}

