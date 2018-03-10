#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 Drill, Step 2, Page 126
//Modify the previous program to write out "The smaller value is:", - 
//followed by "The larger value is:".

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
    }
 
	return 0;
}

