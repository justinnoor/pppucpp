#include "std_lib_facilities.h"

//Type conversion test program pg.81.
//Run this program with a variety of inputs.
//Use small, large, negative, non-integer values, etc.
//See what the compiler does.


int main()
{

    double d = 0;
    while (cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d == " << d
             << "i == " << i
             << "i2 == " << i2
             << "char("<< c <<")\n";
        }

}

