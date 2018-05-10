//ex_3_p170.cpp
//=============
/*The program on pg.169, even when corrected has errors. It will return values that surpass -273.15 degrees celcius, which is the lowest temperature that can be reached. Place a check in main() that will prevent users from entering temperatures below -273.15 celcius.*/
//==================

#include "std_lib_facilities.h"

using namespace std;

double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main()
{
	double c; 
    cin >> c;

    if(c < -273.15)
        error("Enter a temperature above -273.15");

    double k = ctok(c);

    cout << k << '\n';
}
