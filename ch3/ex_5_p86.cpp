#include "std_lib_facilities.h"

using namespace std;

//Chapter 3 Ex.5 Pg.86
//Modify the previous program to prompt the user for floating point values.

int main()
{
    double val_1;
    double val_2;
    
    cout << "Please enter two floating point numbers:\n";
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

