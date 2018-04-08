//Chapter 4, Exercise 5, Page 128
//===============================

/*Make a simple calculater that performs basic addition, subtraction, multiplication, and division, based on two input values. Prompt the user to enter three values: two doubles and a character that represents the operation. The input 5.5, 6.5, and '+' should output "The sum of 5.5 and 6.5 is 12".*/


#include "std_lib_facilities.h"

using namespace std;


double sum(double x, double y)
{
    return x + y;
}
double difference(double x, double y)
{
    return x - y;
}
double product(double x, double y)
{
    return x * y;
}
double quotient(double x, double y)
{
    return x / y;
}


int main()
{
    double a;
    double b;

    char sign;

    vector<char> operators = {'+', '-', '*', '/'};

	cout << "Welcome to the simple calculator\n"
         << "Enter two number and an operator (ie: 5, 5, and '+'):\n"
         << "Press 'Ctrl d' to exit\n";

    while(cin >> a >> b >> sign)
    {     
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

