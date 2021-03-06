#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 Drill, Step 6, Page 126
//Modify the previous program so that the body of the while-loop only - 
//reads one double each time around. Define two variables to keep - 
//track of the smallest and largest values entered. Print the values - 
//each time around.

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
            cout << var_1 << " is the largest value so far\n";
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

