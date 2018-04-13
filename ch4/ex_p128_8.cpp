/*This program provides grains of rice to the inventor of the game of chess. For every square on the chess board, which number 64, one grain of rice is provided, i.e., 1 for the first, 2 for the second, 3 for the third, and so on. After figuring out how many grains of rice a chess board generates, this program will calculate how many chess squares are required to provide the inventor with 'at least' 1,000 grains, 1,000,000 grains, and 1,000,000,000 grains of rice.*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int chess_square = 0;
    int grains_per_square = 0;
    int grains_per_board = 0;


    //Number of grains produced by one chess board
	for(int i = 1; i <= 64; ++i)
    {
	    chess_square = i;
        grains_per_square = i * i;
        grains_per_board = grains_per_board + grains_per_square;
    }

    cout << "There are " << chess_square << " squares in one chess board\n";
    cout << "One chess board produces " << grains_per_board 
         << " grains of rice" << '\n';

    //Number of squares required for 1000 grains
	for(int i = 1; i <= 64; ++i)
    {
	    chess_square = i;
        grains_per_square = i * i;

        if(grains_per_square == 1024)
            cout << "1000 grains requires " << chess_square << " chess squares\n";
    }

    //Number of chess boards requried for 1000000, and 1000000000 grains
    //First reset the variables
    chess_square = 0;
    grains_per_square = 0;
    grains_per_board = 0;

	for(int i = 1; i <= 64; ++i)
    {
	    chess_square = i;
        grains_per_square = i * i;
        grains_per_board = grains_per_board + grains_per_square;
    }

    cout << "1000000 grains require approximately "
         << (1000000 / grains_per_board) + 1 << " chess boards\n";
    cout << "1000000000 grains require approximately "
         << (1000000000 / grains_per_board) + 1 << " chess boards\n";


    //Use these to print out the iterations if needed, to see what's going on
	/*for(int i = 1; i <= 64; ++i)
    {
	    chess_square = i;
        grains_per_square = i * i;
        grains_per_board = grains_per_board + grains_per_square;

        cout << "square " << chess_square << '\n';
        cout << "grains_per_square = " << grains_per_square << '\n';
    }*/


	return 0;
}

