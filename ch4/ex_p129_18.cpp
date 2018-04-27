//Chapter 4, Page 129, Exercise 18
//================================
//Write a program to solve quadratic equations ax^ + bx + c = 0.

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    double a, b, c;
    double x1, x2;

    //Read in the coefficients
    cout << "Enter three coefficients, beginning with a, then b, then c:\n";
    cin >> a >> b >> c;

    if(a == 0)
    {
        cout << "Undefined: 'a' cannot be zero. Please try again.\n";
        return 1;
    }

    //Find the two roots
    x1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);    
    x2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

    //Stdout
    cout << "The two roots are: " << x1 << " and " << x2 << '\n';

    return 0;
}
