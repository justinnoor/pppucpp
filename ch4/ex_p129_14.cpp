//Chapter 4, Page 129, Exercise 14
//================================
/*Write a program that reads an int named 'max' and finds all of the prime numbers between 1 and 'max' using the Sieve of Eratosthenes method. There are clearly millions, if not more, ways of doing this. Unnecessary complexity only strokes egos! Just remember that the Eratosthenes method strikes off all of the multiples of 2, 3, 4, 5, and 7.*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int max;

    vector<int> primes = {};

    cout << "Enter a number:\n";
    cin >> max;

    for(int i = 2; i < max; ++i)
    {
        if(i > 2 && i % 2 == 0)
            continue;
        else if(i > 3 && i % 3 == 0)
            continue;
        else if(i > 5 && i % 5 == 0)
            continue;
        else if(i > 7 && i % 7 == 0)
            continue;
        else
            primes.push_back(i);
    }

    cout << "The prime numbers between 1 and " << max << " are:\n";

    for(int x : primes)
        cout << x << " ";

    cout << '\n';

    return 0;
}

