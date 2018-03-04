#include "std_lib_facilities.h"

using namespace std;


//Chapter 4 drill pg.126 step 6:
//See instructions on pg.126, they are rather lenghty.
//Since the instructions specify reading in only one double at a time, - 
//I move 'var_1' to 'var_2' at the end of the loop.
//Also, I initialize 'var_2' with zero so that there is a double in - 
//memory when the user provides their first entry.
//Let me know how I can improve this!


int main()
{
    double entry;
    double var_1;
    double var_2 = 0;

    char quit = '|';

    cout << "Enter an integer. Enter '|' to exit  \n";

    while(cin >> entry) {

        var_1 = entry;

        if(entry == quit)
            break; 

        if(var_2 == 0)
            cout << var_1 << " is the largest value so far\n";
        else if(var_1 < var_2)
            cout << var_1 << " is the smallest value so far\n"
                 << var_2 << " is the largest value so far\n";
        else if(var_1 > var_2)
            cout << var_1 << " is the largest value so far\n"
                 << var_2 << " is the smallest value so far\n";
        else if(var_1 == var_2)
            cout << "Values: " << var_1 << " & " << var_2 << " are equal\n";

        if(var_1 - var_2  >= -.01 && var_1 - var_2 <= .01 && var_1 - var_2 != 0)
            cout << "The numbers: " << var_1 << " & " << var_2 << " are almost equal\n";

        var_2 = var_1;
    }
 
	return 0;
}

