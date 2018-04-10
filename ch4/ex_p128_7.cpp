//Chapter 4, Exercise 7, Page 128
//===============================

/*Modify the  simple calculater program from exercise 5 to accept only single-digit numbers written as either digits or spelled numbers. Once again, this calculator only works with single-digit numbers per the instructions.*/


#include "std_lib_facilities.h"

using namespace std;


int sum(int x, int y)
{
    return x + y;
}
int difference(int x, int y)
{
    return x - y;
}
int product(int x, int y)
{
    return x * y;
}
int quotient(int x, int y)
{
    return x / y;
}


int main()
{
    char sign;

    string number_1;
    string number_2;

    vector<char> operators = {'+', '-', '*', '/'};

    vector<string> digits = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    vector<string> numbers = {
        "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

	cout << "Welcome to the single digit calculator!\n"
         << "It only works with numbers 1 thru 9!\n"
         << "\nEnter two single-digits or two spelled-out numbers, -\n"
         << "and an operator (ie: 'one', 'one', and '+', or 1, 1, and '+'):\n"
         << "Press 'Ctrl z' to exit\n";

    //Take in strings and use iteration to generate numbers
    //=====================================================================
    while(true)
    {
        int a = 0;
        int b = 0;
        int counter_1 = 0;
        int counter_2 = 0;
        int counter_3 = 0;
        int counter_4 = 0;


        cin >> number_1 >> number_2 >> sign;

        for(string x : digits)
        {
            counter_1 = counter_1 + 1;
            counter_2 = counter_2 + 1;

            if(x == number_1)
                a = counter_1;
            if(x == number_2)
                b = counter_2;                
        }
        for(string x : numbers)
        {
            counter_3 = counter_3 + 1;
            counter_4 = counter_4 + 1;

            if(x == number_1)
                a = counter_3;
            if(x == number_2)
                b = counter_4;                
        }

  
    //Perform the functions
    //===================================================================== 
		if(sign == operators[0])
			cout << "The sum of " << a << " and " << b << " is "
				 << sum(a, b) << '\n';
		else if(sign == operators[1])
			cout << "The difference between " << a << " and " << b << " is "
				 << difference(a, b) << '\n';
		else if(sign == operators[2])
			cout << "The product of " << a << " times " << b << " is "
				 << product(a, b) << '\n';
		else if(sign == operators[3])
			cout << "The quotient of " << a << " divided by " << b << " is "
				 << quotient(a, b) << '\n';
        else
            cout << "You must enter a valid operator\n";
    }

    cout << "Goodbye\n";

	return 0;
}

