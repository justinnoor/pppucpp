#include "std_lib_facilities.h"

using namespace std;

//Write a while loop that reads in two ints and prints them.
//Exit the program with the '|' character.

//I'm not too happy with the while loop in terms of its idiomaticness.
//This is how I got the terminating '|' character to work on either -
//input. I also had to use chars instead of ints to get the terminating - 
//'|' character to work, which, is a safe conversion according to Stroustrup (p.79).
//Please let me know how I can clean this up. Otherwise it's time to move on :)


int main()
{
    char first;
    char second;
    char quit = '|';

    cout << "Enter two integers. Enter '|' to exit  \n";

    while(cin >> first) {
        if(first == quit)
            break;
     
        cin >> second;
        if(second == quit)
            break;
    
        cout << "You entered: " << first << " & " << second << '\n';
    }

	return 0;
}

