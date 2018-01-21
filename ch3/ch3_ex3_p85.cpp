#include "std_lib_facilities.h"

using namespace std;

int main()
{
    double user_miles;
	double kilos = 1.69;

    cout << "Enter a distance in miles: \n";
    cin >> user_miles;

    if (user_miles == 1)
	    cout << user_miles << " mile = " << user_miles * kilos << " kilometers\n";
    else
        cout << user_miles << " miles = " << user_miles * kilos << " kilometers\n";

	return 0;
}

