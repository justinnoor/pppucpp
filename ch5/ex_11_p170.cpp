//ex_11_p170.cpp
//==============
/*Make a program that writes out the Fibonacci series. Start with this pre-existing sequence: 1 1 2 3 5 8 13 21 34, and keep building on to it until you find the largest Fibonacci number that will fit into an int.*/
//===============================================

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int x;
    char next;
    vector<double> fib = {1, 1, 2, 3, 5, 8, 13, 21, 34};

    cout << "The Fibonacci series begins with the numbers:\n";

    for(int i : fib)
        cout << i << " ";

    cout << "\nEnter 'n' to generate the next number sequence:\n";

    while(cin >> next) {
		if(next == 'n')
			fib.push_back(fib[fib.size() - 2] + fib[fib.size() - 1]);
		else
			error("char 'n' was not entered");

        x = fib[fib.size() - 1];

        cout << "The next number sequence is: " << x << '\n';
    }

    return 0;
}

