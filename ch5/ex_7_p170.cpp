//ex_7_p170.cpp
//=============
/*Write a program that applies the quadratic formula. Add a check to ensure that the square root expression is not less than zero. How do you know if the results are plausible? Can they be checked?*/
//===============================

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    double a, b, c;
    double x1, x2;

    //Read in the coefficients
    cout << "Enter three coefficients, beginning with a, then b, then c:\n";
    cin >> a >> b >> c;

    //'a' cannot be zero
    if(a == 0)
        error("a cannot be 0");

    //Find the two roots
    x1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);    
    x2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

    cout << "The two roots are: " << x1 << " and " << x2 << '\n';

    return 0;
}
