//Chapter 4, Page 129, Exercise 20
//================================
/*Modify the previous program so that when a name is entered, the program will output the corresponding score, or "score not found"*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    string user_name;

    int user_score;

	vector<string> names = {"Ayah", "Anh", "Iman", "Tina", "Meiyu"};
	vector<int> scores = {25, 24, 23, 22, 21};

	cout << "Enter the name you are looking for:\n";

	while(cin >> user_name)
    {
		for(int i = 0; i < names.size(); ++i)
        {
            if(user_name == names[i])
            {
			    cout << "Score: " << scores[i] << '\n';
                return 1;
            }
         
            else
            {
                cout << "Name not found\n";
                return 1;
            }
        }
    }

    cout << "Goodbye :)\n";
}
