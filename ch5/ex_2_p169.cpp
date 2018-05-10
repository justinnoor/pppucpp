//ex_2_p169.cpp
//=============
/*The program on pg.169, ex.2, converts Celcius to Kelvin. It has many errors in it. Find the errors, list them, and correct the code.*/
//===================================================

#include "std_lib_facilities.h"

using namespace std;

double ctok(double c)
{
    //Narrowing error
	//int k = c + 273.15;

    //Correct code:
    double k = c + 273.15;

    //Return statement does define an object
    //return int

    //Correct code:
    return k;
}

int main()
{
    //Technically there's no need to initialize this, but it's not wrong.
	double c = 0; 
    
    //Undeclared variable d. But that doesn't matter becaues d does nothing.
    //cin >> d;

    //Correct code:
    cin >> c;

    //Bad argument error in ctok()
    //double k = ctok("c");

    //Correct code:
    double k = ctok(c);

    cout << k << '\n';
}
