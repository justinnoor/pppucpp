//Chapter 14, Page 129, Exercise 17
//=================================
/*Write a program that finds the min, max, and  mode of a sequence of strings. The min is defined as the smallest string, and the max is defined as the largest string. The mode is defined as the string that occurs the most.*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int count = 0;

    string mode;
    string min_str;
    string max_str;

    vector<string> string_seq = {
        "anh", "ahmad", "cynthia", "sara", "sara", "sara", "mariana",
        "krishna", "sara", "rosa lynn"
    };

    sort(string_seq);

    min_str = string_seq[0];
    max_str = string_seq[string_seq.size() - 1];

    //Find min
    //========
    for(int i = 1; i < string_seq.size(); ++i)
    {
        if(string_seq[i].length() < min_str.length())
            min_str = string_seq[i];
    }

    //Find max
    //========
    for(int i = 0; i < string_seq.size() - 1; ++i)
    {
        if(string_seq[i].length() > max_str.length())
            max_str = string_seq[i];
    }

    //Find mode
    //=========
    for(int i = 0; i < string_seq.size(); ++i)
    {
		string temp_mode = string_seq[i];
		int temp_count = 0;

        for(int j = 0; j < string_seq.size(); ++j)
            if(string_seq[j] == temp_mode)
                ++temp_count;
		if(temp_count > count)
		{
			mode = temp_mode;
			count = temp_count;
		}

    }

    //Stdout
    //======
    cout << '\n';
    cout << "min = " << min_str << '\n';
    cout << "max = " << max_str << '\n';
    cout << "mode = " << mode << ", frequency = " << count << '\n';
    cout << '\n';

    return 0;
}
