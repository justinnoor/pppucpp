#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a whole number: \n";
    int n; //Change n to an int
    double x; //Add double x for the sqrt() function
	cin >> n;
	cout << "\n n == " << n
	     << "\n n + 1 == " << n + 1 
         << "\n three times n == " << 3 * n
         << "\n twice n == " << n + n
         << "\n n squared == " << n * n
         << "\n half of n == " << n / 2 //Note this will not be a float
         << "\n square root of n == " << sqrt(x = n) //Assign n to double x

    //Add some additional operators of your choice
         << "\n incrementing n by 1 == " << ++ n
         << "\n decrementing n by 1 == " << -- n
         << '\n';

    return 0;
}
 
