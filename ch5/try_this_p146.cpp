//try_this_p146.cpp
//=================
//Test the program on pg.146 with a variety of values. Print out all all of the values (area1, area2, area3, and ratio). Keep inserting values until all errors are caught. How do you know if you caught all the errors?
//=================================================


#include "std_lib_facilities.h"

using namespace std;

int area(int length, int width)
{
    if(length <= 0 || width <= 0)
        error("non-positive area() argument");
    return length * width;
}

int framed_area(int x, int y)
{
    constexpr int frame_width = 2;
    if(x - frame_width <= 0 || y - frame_width <= 0)
        error("non-positive area() argument called by framed_area");
    return area(x - frame_width, y - frame_width);
}

int main()
{
    int x = 3;
    int y = 4;
    int z = 6;

    int area1 = area(x, y);
    if(area1 <= 0)
        error("non-positive area");

    int area2 = framed_area(3, z);
    int area3 = framed_area(y, z);
    
    double ratio = double(area1) / area3;

    cout << "The values are:\n";
    cout << "area1 = " << area1 << '\n';
    cout << "area2 = " << area2 << '\n';
    cout << "area3 = " << area3 << '\n';
    cout << "ratio = " << ratio << '\n';

    return 0;
}

