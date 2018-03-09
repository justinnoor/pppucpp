#include "std_lib_facilities.h"

using namespace std;

//Write a program that takes an operation followed by two operands - 
//and output the results.

int main()
{
    string operation;
    double operand_1;
    double operand_2;

    cout << "Please enter one of the following operators: \n"
         << "+ - * or /\n";
    cin >> operation >> operand_1 >> operand_2;

    if (operation == "+")
       cout << "Your answer is: " << operand_1 + operand_2 << "\n";
    else if (operation == "-")
       cout << "Your answer is: " << operand_1 - operand_2 << "\n";
    else if (operation == "*")
       cout << "Your answer is: " << operand_1 * operand_2 << "\n";
    else if (operation == "/")
       cout << "Your answer is: " << operand_1 / operand_2 << "\n";
    else
       cout << "Sorry, I don't know that operation\n";

    
	return 0;
}

