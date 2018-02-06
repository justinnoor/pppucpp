#include "std_lib_facilities.h"

using namespace std;

//Rewrite "try_this_p111.cpp" to use a for loop instead of a while loop.
//Then modify the program to also output a table of uppercase letters.
//The note below the instructions on p.113 hints at using vectors.

int main()
{
    constexpr int h = 96;

    vector<char> alphabet_l = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
    vector<char> alphabet_u = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	
    cout << "\nLowercase table: \n";

	for(int i = 0; i < alphabet_l.size(); ++i)
        cout << alphabet_l[i] << '\t' << h + (i + 1) << '\n';

    cout << "\nUppercase table: \n";

	for(int i = 0; i < alphabet_u.size(); ++i)
        cout << alphabet_u[i] << '\t' << h + (i + 1) << '\n';

	return 0;
}

