#include "std_lib_facilities.h"

using namespace std;

//These are questions 2 thru 5 for the drill on p.126. They were -
//combined to avoid redundancy. This program builds off of 'drill_p126_1.cpp'.

int main()
{
    double first;
    double second;
    char quit = '|';

    cout << "Enter two integers. Enter '|' to exit  \n";

    while(cin >> first >> second) {
        if(first == quit)
            break;
     
        else if(second == quit)
            break;

        else if(first - second  >= -.01 && first - second <= .01 && first - second != 0)
            cout << "The numbers: " << first << " & " << second << " are almost equal\n";

        else if(first - second < -.01)
            cout << "The smaller value is: " << first
                 << ", and The larger value is: " << second << '\n';
    
        else if(first - second > .01)
            cout << "The larger value is: " << first
                 << ", and The smaller value is: " << second << '\n';

        else if(first == second)
            cout << "The numbers: " << first << " & " << second << " are equal\n";
    }
 
	return 0;
}

