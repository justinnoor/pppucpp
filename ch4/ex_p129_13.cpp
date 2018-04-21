//Chapter 4, Page 129, Exercise 13
//================================
/*Write a program that finds all of the prime numbers between 1 and 100 using the Sieve of Eratosthenes method. There are clearly millions, if not more, ways of doing this. Unnecessary complexity only strokes egos!*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    vector<int> primes = {2, 3, 5, 7};

    for(int i = 2; i <= 100; ++i)
    {
        if(i % 2 == 0)
            continue;
        else if(i % 3 == 0)
            continue;
        else if(i % 5 == 0)
            continue;
        else if(i % 7 == 0)
            continue;
        else
            primes.push_back(i);
    }

    cout << "The prime numbers between 1 and 100 are:\n";

    for(int x : primes)
        cout << x << " ";

    cout << '\n';

    return 0;
}

