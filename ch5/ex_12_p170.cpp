//ex_12_p170.cpp
//==============
/*This program creates a number guessing game called "Bulls and Cows." If the user guesses the correct number, they score 1 bull. If they guess the wrong number, they score one cow. The numbers are a sequence of four integers between 0 and 9. The user's numbers must also be in the correct place. For example, if '1479' is the sequence to be guessed, and the user guesses '1347', they would score 1 bull, and 3 cows. If the user guessed '1439', they would score 2 bulls and 2 cows, etc. The user keeps guessing until all of the numbers are guessed.*/
//==================================================

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int guess;
    int bull_count = 0;
    int cow_count = 0;

    vector<int> guesses;
    vector<int> nums = {2, 0, 1, 8};

    cout << "Enter a sequence of 4 numbers:\n";

    while(cin >> guess) {
        guesses.push_back(guess);

        if(guesses.size() == 4) {
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
					cout << i;
				cout << "!\n";
				break;
            }
            else
                cout << "Wrong numbers. Try again.\n";

            bull_count = 0;
        }
    }

    return 0;
}

