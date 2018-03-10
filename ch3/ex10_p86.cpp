#include "std_lib_facilities.h"

using namespace std;

//Chapter 3 Ex.10 Pg.86
//Write a program that takes an operation followed by two operands -
//and prints the result. Examples: + 5 10, * 2 2.

int main()
{
    string operation;
    double val_1;
    double val_2;

    cout << "Please enter an operation and two operators\n"
         << "Examples: + 5 10, or * 2 2\n";

    cin >> operation >> val_1 >> val_2;

    if(operation == "+")
        cout << val_1 << " + " << val_2 << " = " << val_1 + val_2 << '\n';
    else if(operation == "-")
        cout << val_1 << " - " << val_2 << " = " << val_1 - val_2 << '\n';
    else if(operation == "*")
        cout << val_1 << " * " << val_2 << " = " << val_1 * val_2 << '\n';
    else if(operation == "/")
        cout << val_1 << " / " << val_2 << " = " << val_1 / val_2 << '\n';

	return 0;
}

