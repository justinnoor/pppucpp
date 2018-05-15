//ex_10_p170.cpp
//=============
/*Modify exercise so that it uses a double instead of an int. Make another vector that stores n - 1 differences between adjacent values. Print out the results.*/
//============================================================================

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    double n, x, sum = 0;

    vector<double> values;
    vector<double> differences;

    cout << "Enter a number for 'n':\n";
    cin >> n;

    cout << "Enter integers into a vector (enter '|' to exit):\n";

    while(cin >> x) {
        values.push_back(x);
        if(x == '|')
            break;
    }

    for(int i = 0; i < n; ++i) {
        sum += values[i];
    }

    for(int j = 0; j < n; ++j) {
        differences.push_back(values[j] - 1);
	}

    cout << "The sum of the first " << n << " numbers is: " << sum << '\n';
    cout << "The n - 1 differences are: ";

    for (double y : differences) {
        cout << y << " ";
    };

    cout << '\n';

    return 0;
}
