#include "std_lib_facilities.h"

using namespace std;

int main()
{

    int val1;
    int val2;
    
    cout << "Please enter your numbers:\n";
    cin >> val1 >> val2;

    if (val1 < val2)
        cout << "val1: " << val1 << " is smaller than val2: "
             << val2 << "\n"
             << "The difference between val2 and val1 is: "
             << val2 - val1 << "\n";
    else
        cout << "val1: " << val1 << " is larger than val2: "
             << val2 << "\n"
             << "The difference between val1 and val2 is: "
             << val1 - val2 << "\n";

	cout << "The sum of val1 + val2 = " << val1 + val2 << "\n"
         << "The product of val1 and val1 is: " << val2 * val2 << "\n";

    if (val1 < val2)
        cout << "The ratio val1:val2 = 1:" << val2 / val1 << "\n";
    else if (val1 > val2)
        cout << "The ratio val1:val2 = " << val1 / val2 << ":1\n";

	return 0;
}

