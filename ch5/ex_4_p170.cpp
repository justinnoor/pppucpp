//ex_4_p170.cpp
//=============
/*Do exercise 3 again but this time add the check inside of ctok()*/
//==================================================================

#include "std_lib_facilities.h"

using namespace std;

double ctok(double c)
{
    if(c < -273.15)
        error("Enter a temperature above -273.15");
    double k = c + 273.15;
    return k;
}

int main()
{
	double c; 
    cin >> c;

    double k = ctok(c);

    cout << k << '\n';
}
