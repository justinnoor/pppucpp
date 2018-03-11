#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 Try This, Page 111
//Use a loop to write out a table of characters -
//with their corresponding integer values.

int main()
{
	char a = 97;

	int i = 0;

	while(i < 26) {
        cout << 'a' << '\t' << a + i << '\n';
        ++i;
        cout << 'b' << '\t' << a + i << '\n';
        ++i;
        cout << 'c' << '\t' << a + i << '\n';
        ++i;
        cout << 'd' << '\t' << a + i << '\n';
        ++i;
        cout << 'e' << '\t' << a + i << '\n';
        ++i;
        cout << 'f' << '\t' << a + i << '\n';
        ++i;
        cout << 'g' << '\t' << a + i << '\n';
        ++i;
        cout << 'h' << '\t' << a + i << '\n';
        ++i;
        cout << 'i' << '\t' << a + i << '\n';
        ++i;
        cout << 'j' << '\t' << a + i << '\n';
        ++i;
        cout << 'k' << '\t' << a + i << '\n';
        ++i;
        cout << 'l' << '\t' << a + i << '\n';
        ++i;
        cout << 'm' << '\t' << a + i << '\n';
        ++i;
        cout << 'n' << '\t' << a + i << '\n';
        ++i;
        cout << 'o' << '\t' << a + i << '\n';
        ++i;
        cout << 'p' << '\t' << a + i << '\n';
        ++i;
        cout << 'q' << '\t' << a + i << '\n';
        ++i;
        cout << 'r' << '\t' << a + i << '\n';
        ++i;
        cout << 's' << '\t' << a + i << '\n';
        ++i;
        cout << 't' << '\t' << a + i << '\n';
        ++i;
        cout << 'u' << '\t' << a + i << '\n';
        ++i;
        cout << 'v' << '\t' << a + i << '\n';
        ++i;
        cout << 'w' << '\t' << a + i << '\n';
        ++i;
        cout << 'x' << '\t' << a + i << '\n';
        ++i;
        cout << 'y' << '\t' << a + i << '\n';
        ++i;
        cout << 'z' << '\t' << a + i << '\n';
        ++i;
    }

	return 0;
}

