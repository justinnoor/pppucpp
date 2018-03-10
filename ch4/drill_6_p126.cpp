#include "std_lib_facilities.h"

using namespace std;


//Chapter 4 drill pg.126 step 6:
//See instructions on pg.126, they are quite lenghty.
//Since the instructions specify reading in only one double at a time, - 
//I assign 'var_1' to 'var_2' at the end of the loop to track the values.
//Also, I initialize 'var_2' with zero (before the loop) so that there - 
//is something in memory when the user provides the very first entry.
//As always, let me know how I can improve this!


int main()
{
    double var_1;
    double var_2 = 0;

    char quit = '|';

    cout << "Enter an integer. Enter '|' to exit  \n";

    while(cin >> var_1) {
        if(var_1 == quit)
            break; 

        if(var_2 == 0)
            cout << var_1 << " is the largest, and the only, value so far\n";
        else if(var_1 < var_2)
            cout << var_1 << " is the smallest value so far\n"
                 << var_2 << " is the largest value so far\n";
        else if(var_1 > var_2)
            cout << var_1 << " is the largest value so far\n"
                 << var_2 << " is the smallest value so far\n";
        else if(var_1 == var_2)
            cout << var_1 << " & " << var_2 << " are equal\n";

        if(var_1 - var_2  >= -.01 && var_1 - var_2 <= .01 && var_1 - var_2 != 0)
            cout << var_1 << " & " << var_2 << " are almost equal\n";

        var_2 = var_1;
    }
 
	return 0;
}

