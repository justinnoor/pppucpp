//Chapter 4, Page 128, Exercise 9
//===============================

/*All this program does is try to calculate the amounts of rice grains that the inventor asked for in the previous program. That means simply printing the iterations, nothing fancy. It quickly becomes obvious that after the 6th iteration, which attempts to square something like 65500, the product is too large for the int object. The remaining iterations produce zeros. Just run the program and watch.*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int chess_square = 0;
    int grains_per_square = 2;


    //Print out square 1 separately
    cout << "square 1\n"
         << "grains_per_square = 1\n";

    //Iterate over the chess board, starting at square 2
    //==================================================
	for(int i = 2; i <= 64; ++i)
    {
	    chess_square = i;
        grains_per_square = grains_per_square * grains_per_square;

        cout << "square " << chess_square << '\n';
        cout << "grains_per_square = " << grains_per_square << '\n';
    }

	return 0;
}

