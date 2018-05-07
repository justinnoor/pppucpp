//try_this_p.166
//==============
//Find a pair of values for area that meet the pre-condition, but break the
//post-condition.
//===============

#include "std_lib_facilities.h"

using namespace std;

int area(int length, int width)
{
    if(length <= 0 || width <= 0)
        error("area() pre-condition");
    int a = length * width;
    if(a <= 0)
        error("area() post-condition");
    return a;
}

int main ()
{
    int i, j;

    cout << "Enter a pair of values: \n";
    cin >> i >> j;

    cout << "The area is:\n"
         << area(i, j) << '\n';

    return 0;
}
