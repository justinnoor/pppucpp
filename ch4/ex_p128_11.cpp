//Chapter 4, Page 128, Exercise 11
//================================

/*This program extracts all of the prime numbers between 1 and 100. Extract the numbers from a loop, store them in a vector, and print them to the screen. Interestingly, the instructions for this exercise are a bit blurry. They seem to imply that the prime numbers should be tested against another pre-existing vector of prime numbers. However, the insructions clearly imply that this is optional, therefore, the student can solve the exercise according to their preferred method.*/


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
    vector<int> primes = {};

    for(int i = 2; i <= 100; ++i)
    {
        if(is_prime(i))
            primes.push_back(i);
    }

    cout << "The prime numbers between 1 and 100 are:\n";

    for(int x : primes)
        cout << x << '\n';

    return 0;
}

