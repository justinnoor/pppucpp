//ex_9_p170.cpp
//=============
/*Modify the previous program so that it throws an error if the result cannot be represented as an int.*/
//====================

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int n, x, sum = 0;

    vector<int> values;

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

    if(sum)
        cout << "The sum of the first " << n << " numbers is: " << sum << '\n';
    else
        error("Result cannot be represented as an int");

    return 0;
}
