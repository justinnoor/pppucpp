//ex_5_p170.cpp
//=============
/*Add to the last program so that it also converts kelvin to celcius.*/
//=====================================================================

#include "std_lib_facilities.h"

using namespace std;

double ctok(double c)
{
    if(c < -273.15)
        error("Enter a number above -273.15");
    double k = c + 273.15;
    return k;
}

double ktoc(double d)
{
    if(d <= 0)
        error("Enter a number above 0");
    double l = d - 273.15;
    return l;
}

int main()
{
	double i; 
    cin >> i;

    double j = ctok(i);
    double k = ktoc(i);

    cout << i << " is "
         << k << " celcius " << "and " << j << " kelvin\n";
}

