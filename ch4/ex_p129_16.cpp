//Chapter 14, Page 129, Exercise 16
//=================================
//Write a program that finds the mode of a set of positive integers.


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int mode = 0;
    int count = 0;

    vector<int> pos_ints = {1, 6, 6, 2, 3, 3, 4, 4, 4, 4, 4, 5, 5};

    sort(pos_ints);

    for(int i = 0; i < pos_ints.size() - 1; ++i)
    {
		int temp_mode = pos_ints[i];
		int temp_count = 0;

        for(int j = 0; j < pos_ints.size() - 1; ++j)
            if(pos_ints[j] == temp_mode)
                ++temp_count;
		if(temp_count > count)
		{
			mode = temp_mode;
			count = temp_count;
		}

    }

    cout << "mode = " << mode << '\n';
    cout << "frequency = " << count << '\n';
    cout << '\n';

    return 0;
}
