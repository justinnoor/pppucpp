//Chapter 4, Page 128, Exercise 9
//===============================

/*All this program does is try to calculate the amounts of rice grains that the inventor asked for in the previous program. That means simply printing the iterations, nothing fancy. It quickly becomes obvious that after the 6th iteration, which attempts to square something like 65500, the product is too large for the int object. The reamining iterations produce zeros. This program also experiments with a double, just to see what happens. What is the largest number of squares for which the numbers of grains can be calculated with an int object? How about for a double?.*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int chess_square_int = 0;
    int grains_per_square_int = 2;
    double chess_square_double = 0;
    double grains_per_square_double = 2;


    //Iterate over the chess board using an int, starting at square 2
    //===============================================================
    cout << "An int object produces:\n";

    //Print square 1 separately
    cout << "square 1\t" << "grains_per_square = 1\n";

	for(int i = 2; i <= 64; ++i)
    {
	    chess_square_int = i;
        grains_per_square_int = grains_per_square_int * grains_per_square_int;

        cout << "square " << chess_square_int << '\t';
        cout << "grains_per_square = " << grains_per_square_int << '\n';

        if(grains_per_square_int == 65536)
            break;
    }


    //Iterate over the chess board using a double, starting at square 2
    //=================================================================
    cout << "A double object produces:\n";

    //Print square 1 separately
    cout << "square 1\t" << "grains_per_square = 1\n";

	for(int i = 2; i <= 64; ++i)
    {
	    chess_square_double = i;
        grains_per_square_double = 
            grains_per_square_double * grains_per_square_double;

        cout << "square " << chess_square_double << '\t';
        cout << "grains_per_square = " << grains_per_square_double << '\n';

		if(grains_per_square_double > 1.34078e+154)
			break;
    }

    cout << "The greatest number of squares: \n"
         << "For an int: " << chess_square_int << '\n'
         << "For a double: " << chess_square_double << '\n';

	return 0;
}

