//Chapter 4, Exercise 6, Page 128
//===============================

/*Write a program that stores ten numbers in string form, i.e., "one", "two", ......, "nine". Convert digits into their corresponding string, i.e., input 7 returns "seven". In the same input loop, also convert string numbers into their corresponding digit values, i.e., input "seven" returns 7.*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    vector<string> numbers = {
        "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string number;

    int counter = 0;
    int digit;

    while(true)
    {
        cout << "Enter a digit between 1 and 9 :\n";
        cin >> digit;

        cout << "Now type a number name between 1 and 9 (i.e, 'one'):\n";
        cin >> number;

        cout << digit << " is " << numbers[digit -1] << " in string form\n";
      
        for(string x : numbers)
        {
            counter = counter + 1;

            if(x == number)
                cout << number << " is " << counter << " in digit form\n";
        }
    }

	return 0;
}

