//ex_6_p170.cpp
//=============
/*Write a program that converts celcius to fahrenheit and vise-versa. Use estimation to see if your results are plausible*/
//=====================================

#include "std_lib_facilities.h"

using namespace std;

double ctof(double a)
{
    if(a <= -273.15)
        error("Enter a number above -273.15");
    double f = (9.0/5 * a) + 32;
    return f;
}

double ftoc(double i)
{
    if(i <= 0)
        error("Enter a number above 0");
    double c = 5.0/9 * (i - 32);
    return c;
}

int main()
{
	double x;
    cin >> x;

    double y = ctof(x);
    double z = ftoc(y);

    cout << x << " degrees celcius is " << y << " fahrenheit,\n"
         << " and " << y << " degrees fahrenheit is " << z << " celcius\n";
}

