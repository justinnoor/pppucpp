//Chapter 4, Page 128, Exercise 8
//===============================

/*This program calculates grains of rice for the inventor of the game of chess. For every square of the chess board, totaling 64, the inventor asked for double the amount of grains for every square. In other words, 1 grain for the first square, 2 for the second, 4 for the third, etc. Thankfully, per the instructions, this program only needs calculate how many chess squares are required to provide 1,000 grains, 1,000,000 grains, and 1,000,000,000 grains to the inventor. It quickly becomes obvious that after the 6th iteration, which attempts to square something like 65500, the value is too large for the int object. The remaining iterations produce zeros. It can rightfully be assumed that this is the whole point of the assignment, so don't spend too much time on it. Nothing fancy :).*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int chess_square = 0;
    int grains_per_square = 2;


    //Iterate over entire board, starting at square 2
	for(int i = 2; i <= 64; ++i)
    {
	    chess_square = i;
        grains_per_square = grains_per_square * grains_per_square;
        
        if(grains_per_square > 1000)
            break;
    }
    

		cout << "At least " << chess_square + 1 << " squares are required "
			 << "to produce 1,000 grains.\n"
			 << "At least " << chess_square + 1 << " squares are also required "
			 << "to produce 1,000,000 grains.\n"
		     << "Similarly, at least " << chess_square + 1
             << " squares are required to produce 1,000,000,000 grains.\n";


//Use these to print everything out, to see what's going on.
//========================================================================
    //Print out square 1 separately
    /*cout << "square 1\n"
         << "grains_per_square = 1\n";

    //Iterate over the chess board, starting at square 2
    //==================================================
	for(int i = 2; i <= 64; ++i)
    {
	    chess_square = i;
        grains_per_square = grains_per_square * grains_per_square;

        cout << "square " << chess_square << '\n';
        cout << "grains_per_square = " << grains_per_square << '\n';
    }*/
//========================================================================

	return 0;
}

