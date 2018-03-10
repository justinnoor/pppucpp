#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 Drill, Step 3, Page 126
//Modify the previous program so that it writes "The numbers are equal" - 
//if they are equal.

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

        if(first < second)
            cout << "The smaller value is: " << first
                 << ", and the larger value is: " << second << '\n';
        else if(first > second)
            cout << "The larger value is: " << first
                 << ", and the smaller value is: " << second << '\n';
        else if(first == second)
            cout << "The numbers are equal\n";
    }
 
	return 0;
}

