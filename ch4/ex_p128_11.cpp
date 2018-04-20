/*This program extracts all of the prime numbers between 1 and 100. Interestingly, the instructions are a bit fuzzy. They seem to imply that the prime numbers should be tested against a pre-existing vector of prime numbers. However, the insructions clearly imply that this is an optional method, therefore, this exercise can be solved according to the student's preferred method.*/.


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
            cout << i << '\n';
    }
}

