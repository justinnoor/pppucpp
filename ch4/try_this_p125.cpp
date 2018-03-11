#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 Try This, Page 125
// Write a simple dictionary that censors out words you don't like.

int main()
{   
    string disliked_1 = "trump";
    string disliked_2 = "hillary";

    vector<string> mydict;

    cout << "Add a new word to your dictionary: " << '\n';

    for(string new_word; cin >> new_word;)
        mydict.push_back(new_word);

    sort(mydict);

    for(int i = 0; i < mydict.size(); ++i)
        if(mydict[i] == disliked_1 || mydict[i] == disliked_2)
            cout << "BLEEP" << '\n';
        else if(i == 0 || mydict[i-1] != mydict[i])
            cout << mydict[i] << '\n';

	return 0;
}

