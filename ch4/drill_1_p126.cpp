#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 Drill, Step 1, Page 126
//Write a while loop that reads in two ints and prints them.
//Exit the program with the '|' character.

int main()
{
    int first;
    int second;
    char quit = '|';

    cout << "Enter two integers. Enter '|' to exit  \n";

    while(cin >> first >> second) {
        if(first == quit)
            break;
        else if(second == quit)
            break;

		cout << "You entered: " << first << " & " << second << '\n';
    }
 
	return 0;
}

