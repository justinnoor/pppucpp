//try_this_p153.cpp
//=================
//Write a program that tries to use error() without catching an exception
//=======================================================================

#include "std_lib_facilities.h"

using namespace std;

int main()
try{
    int i;

    cout << "Enter the number 2\n";
    cin >> i;

    if(i != 2)
        error("you must enter 2");
    else
        cout << "Thank you\n";

    return 0;
}
