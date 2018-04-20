//Chapter 4, Page 129, Exercise 12
//================================
/*This program modifies the previous program so that it takes an 'int' object named 'max' and finds all of the prime numbers between 1 and 'max'.*/


#include "std_lib_facilities.h"

using namespace std;

int is_prime(int num)
{
    for(int a = 2; a < num; ++a)
    {
        if(num % a == 0)
            break;
        else
            continue;
    }
}

int main()
{
    int max;

    vector<int> primes = {};

    cout << "Please enter a number:\n";

    cin >> max;

    for(int i = 2; i <= max; ++i)
    {
        if(is_prime(i))
            primes.push_back(i);
    }

    cout << "The prime numbers between 1 and " << max << " are:\n";

    for(int x : primes)
        cout << x << '\n';

    return 0;
}

