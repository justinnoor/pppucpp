//Chapter 4, Exercise 1, Page 128
//===============================

/*Fix program 4.6.3 (p.120) so that it prints a median number. A median number is defined as one that is "exactly in the middle of a sequence of numbers". That means an element may need to be added if the vector has an even number of elements.*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    vector<double> temps;

    cout << "Enter your numbers:\n";

    for(double temp; cin >> temp;)
        temps.push_back(temp);

    sort(temps);

    if(temps.size() % 2 == 0)
        temps.push_back(temps[temps.size() -1] - 1);
        /*The above line "should" add a new element that is 1 less than the largest              element. This will fulfill the definition of "median", and stay clear of the             largest element, or else it may get in the way on the next exercise :).*/

    sort(temps);
    //Of course now the elements need to be re-sorted. You knew that.

    cout << "Your numbers are:\n";
    for(double x : temps)
        cout << x << '\n';

    cout << "\nYour median number is: " << temps[temps.size() / 2] << '\n' << '\n';

	return 0;
}

