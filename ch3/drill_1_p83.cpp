#include "std_lib_facilities.h"

//Chapter 3, Drill 1, Page 83
//This drill will create a simple letter template based on user input.
//Modify the code from pg.60 so that it addresses a person that - 
//you wish to write to. Make any other modifications accordingly.

int main()
{
    string first_name;

    cout << "Enter the name of the person you want to write to:\n";
    cin >> first_name;

    cout << "Dear " << first_name << ", \n";

    return 0;
}
