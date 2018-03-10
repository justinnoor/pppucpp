#include "std_lib_facilities.h"

using namespace std;

//Chapter 3, Exercise 3, Page 85
//Make a program that does nothing except declare variables with illegal names - 
//to screw with the compiler. See what kind of errors you get.

int main()
{
    int 2x = 5;
    double $$$s_baby = 100.0;
    bool false = f;
    char (a) = a;
    string my string = "this is my string";

	return 0;
}

