//ex_8_p170.cpp
//=============
/*Write a program reads in a value for 'n', then reads integers into a vector until the character '|' is entered. The program must calculate the sum of the first 'n' numbers. Print out the result.*/
//==============================

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
        sum += values[i]
    }

    cout << "The sum of the first " << n << " numbers is: " << sum << '\n';

    return 0;
}
