//Chapter 4, Page 129, Exercise 19
//================================
/*Write a program that takes a name and an age, i.e. Inayah 25. The name is a string, and the number is an int. Store the names in vector 'names', and the ints in vector 'scores'. The string and the int must have the same index number, i.e. vect_str[0] == "Inayah", and vect_int[0] == 25. Terminate the input with 'NoName 0'. Do not allow duplicate names to be read in. Terminate the input with an error message if duplicate names are read. At the end of the program, print all of the names to stdout, one per line (i.e. Inayah,25).*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    string user_name;

    int user_score;

	vector<string> names = {};
	vector<int> scores = {};

	cout << "Enter a name and an age, i.e. Amber 23. Enter NoName 0 to exit.\n";

	while(cin >> user_name >> user_score)
    {
        if(user_name == "NoName" && user_score == 0)        
            return 1;
        
        for(string x : names)
        {
            if(x == user_name)
            { 
                cout << "That name already exits\n";
                return 1;
            }
        }

        names.push_back(user_name);
		scores.push_back(user_score);

		for(int i = 0; i < names.size(); ++i)
        {
			cout << names[i] << "," << scores[i] << '\n';
        }
    }

    cout << "Goodbye :)\n";

}
