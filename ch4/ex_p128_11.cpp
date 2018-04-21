/*This program finds all of the prime numbers between 1 and 100 using a loop. Store the prime numbers in a vector and print them to the screen. The insructions offer a recommendation but also imply that the exercise can be solved according to the preferred method of the student.*/


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

