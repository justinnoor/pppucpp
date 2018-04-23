//Chapter 4, Page 129, Exercise 15
//================================
//Write a program that reads an int named 'n' and prints out the first 'n' primes.


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
    int n;
    int i = 1;

    vector<int> primes = {};

    cout << "Please enter a number:\n";

    cin >> n;

    while(true)
    {   
        ++i;

        if(is_prime(i))
            primes.push_back(i);

        if(primes.size() == n)
            break;
    }

	for(int x : primes)
		cout << x << " ";

    cout << '\n';

    return 0;
}

