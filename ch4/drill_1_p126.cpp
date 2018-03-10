#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 drill pg.126 step 1:
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

