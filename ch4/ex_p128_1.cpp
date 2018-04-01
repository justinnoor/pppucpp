#include "std_lib_facilities.h"

using namespace std;

//Fix program 4.6.3 (p.120) so that it prints a median number. A median number is defined as one that is "exactly in the middle of a sequence of numbers". That means elements may need to be added to the vector if the size of the vector is an even number.


int main()
{
    vector<double> temps;

    cout << "Enter your numbers:\n";

    for(double temp; cin >> temp;)
        temps.push_back(temp);

    sort(temps);

    if(temps.size() % 2 == 0)
        temps.push_back(temps.size() + 1);

    cout << "The numbers you entered are:\n";
    
    for(double x : temps)
        cout << x << '\n';

    cout << "\nYour median number is: " << temps[temps.size() / 2] << '\n' << '\n';

	return 0;
}

