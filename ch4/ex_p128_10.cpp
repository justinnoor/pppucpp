//Chapter 4, Page 128, Exercise 10
//================================

/*This program writes the game 'rock, paper, scissors'. However, it is a pseudo-version of the game because the instructions stipulate that the exercise be solved with a switch-statement rather than an if-statement, and it doesn't use true randomness to generate the words. Don't break your head trying to make this perfect. In reality, a switch-statement is not the best tool for the job. Switch-statements only allow testing against single conditions. The game 'rock, paper, scissors' tests against two conditions, i.e. 'if yours = paper && mine = scissors, I win'. Hence, it can be rightfully argued that the purpose of this exercise is to get familiar with switch-statements, and that's all. Have fun!*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int counter = 0;

    char machine_pick, user_pick;
  
    vector<char> machine_picks = {
        'r', 'p', 's', 'r', 's', 'p', 'p', 'r', 's', 'p', 's', 'r', 's', 'p', 'r',         's', 'r', 'p'
    };
  
    cout << "Enter 'r' for rock, 'p' for paper, or 's' for scissors:\n";

    while(cin >> user_pick) 
    {
		machine_pick = machine_picks[counter];

        switch(user_pick) {
            case 'r':
                cout << "You picked rock\n";
                break;
            case 'p':
                cout << "You picked paper\n";
                break;
            case 's':
                cout << "You picked scissors\n";
                break;
        }

        switch(machine_pick) {
            case 'r':
                cout << "I picked rock\n";
                break;
            case 'p':
                cout << "I picked paper\n";
                break;
            case 's':
                cout << "I picked scissors\n";
                break;
        }

		++counter;
     
        if(counter == machine_picks.size() - 1)
            counter = 0;
    }

    return 0;
}
