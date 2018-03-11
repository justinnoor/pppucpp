#include "std_lib_facilities.h"

//Chapter 3 Try this, Page 68
//Get the program on pg.67 to run, and then modify it so that - 
//it reads an int instead of a double. Please note that you have - 
//keep the double 'n' for the sqrt() function. Add some additional - 
//operators at the end for experimentation.

int main()
{
    int val_1;
    double n;

    cout << "Please enter a number for val_1:\n";
	cin >> val_1;

    n = val_1;

	cout << "val_1 = " << val_1 << '\n'
	     << "val_1 + 1 = " << val_1 + 1 << '\n' 
         << "three times val_1 = " << 3 * val_1 << '\n'
         << "twice val_1 = " << val_1 + val_1 << '\n'
         << "val_1 squared = " << val_1 * val_1 << '\n'
         << "half of val_1 = " << val_1 / 2 << '\n'
         << "square root of val_1 = " << sqrt(n) << '\n'

    //Additional operators
         << "incrementing val_1 by 1 with ++ = " << ++ val_1 << '\n';

    return 0;
}
 
