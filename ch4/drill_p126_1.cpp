#include "std_lib_facilities.h"

using namespace std;

//This is step 1 of the drill on page 126 of chapter 4.
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

