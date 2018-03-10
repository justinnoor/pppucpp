#include "std_lib_facilities.h"

using namespace std;

//Chapter 3 Ex.7 Pg.86
//Modify the previous program to use string values. If the user enters - 
//Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald, - 
//Hemingway, Steinbeck.

int main()
{
    string val_1;
    string val_2;
    string val_3;

    cout << "Please enter three words:\n";
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
        cout << val_3 << ", " << val_1 << ", " << val_2 << '\n';
    else if(val_3 <= val_1 && val_3 <= val_2 && val_1 >= val_2)
        cout << val_3 << ", " << val_2 << ", " << val_1 << '\n';

	return 0;
}

