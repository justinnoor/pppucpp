#include "std_lib_facilities.h"

using namespace std;

//Chapter 3, Exercise 6, Page 86
//Write a program that prompts the user for three integer values.
//Output them sequentially with std::cout.
//Separate them with commas (i.e., 1, 2, 3).
//Please note: arrays are not introduced yet and are, therefore, not included.
//As always, let me know how I can clean this up!

int main()
{
    int val_1;
    int val_2;
    int val_3;

    cout << "Please enter three numbers:\n";
    cin >> val_1 >> val_2 >> val_3;

    if(val_1 <= val_2 && val_1 <= val_3 && val_2 <= val_3)
        cout << val_1 << ", " << val_2 << ", " << val_3 << '\n';
    else if(val_1 <= val_2 && val_1 <= val_3 && val_3 <= val_2)
        cout << val_1 << ", " << val_3 << ", " << val_2 << '\n';

    else if(val_2 <= val_1 && val_2 <= val_3 && val_1 <= val_3)
        cout << val_2 << ", " << val_1 << ", " << val_3 << '\n';
    else if(val_2 <= val_1 && val_2 <= val_3 && val_1 >= val_3)
        cout << val_2 << ", " << val_3 << ", " << val_1 << '\n';

    else if(val_3 <= val_1 && val_3 <= val_2 && val_1 <= val_2)
        cout << val_3 << ", " << val_1 << ", " << val_2 << "\n";
    else if(val_3 <= val_1 && val_3 <= val_2 && val_1 >= val_2)
        cout << val_3 << ", " << val_2 << ", " << val_1 << "\n";

	return 0;
}

