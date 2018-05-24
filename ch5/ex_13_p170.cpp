//ex_13_p170.cpp
//==============
/*Modify the previous program so that each game generates a random - 
set of numbers. Make sure that the user can play repeatedly without -
having to start and stop the program.*/
//=====================================
/***NOTE*** There is one problem with this program. There is no way - 
in hell the user will ever guess the numbers. Perhaps the previous
exercise has the same issue?*/
//============================

#include "std_lib_facilities.h"

using namespace std;

int main()
{
	char play;
	int x;
	int guess;
	int bull_count = 0;
	int cow_count = 0;

	cout << "Enter 'y' to play or 'n' to quit:\n";
	cin >> play;

	while(play == 'y') {

		vector<int> guesses;
		vector<int> nums;

		//Generate random numbers
		//=======================
		srand(time(NULL));

		for(int i = 0; i < 4; ++i) {
			x = rand() % 10 + 1;
			nums.push_back(x);
		}

		//Reference only (or else you'll never know what they are)
		//========================================================
		cout << "\nThe numbers are:\n";

		for(int i : nums)
			cout << i << " ";

		cout << '\n';

		//Start game
		//==========
		cout << "Enter 4 numbers:\n";

		for(int i = 0; i < 4; ++i) {
			cin >> guess;
			guesses.push_back(guess);
		}

		for(int i = 0; i < nums.size(); ++i) { 
			if(guesses[i] == nums[i]) {
				cout << "bull ";
				++bull_count;
			}
			else
				cout << "cow ";
		}

		cout << '\n';
		guesses = {};

		if(bull_count == 4) {
			cout << "You guessed the correct numbers ";
			for(int i : nums)
				cout << i << " ";
            cout << '\n';
		}
		else
			cout << "You did not guess all of the numbers\n";

		bull_count = 0;

        cout << "Enter 'y' to play again or 'n' to quit:\n";
        cin >> play;
	}

    cout << "Goodbye\n";

    return 0;
}

