//ex_14_p170.cpp
//==============
/*Write a program that collects key value pairs for the days of - 
the week, i.e. Tuesday 23, or Monday -10. Ensure that bad -
entries are rejected, i.e. Moonday one, or Weensday 23. Accept - 
common synonyms such as Mon or Tue. Store these values in vectors.
Print out the the sum of values in each vector. Also print out the -
number of rejected values.*/
//==========================

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    bool match;
    double sum_nums;
    double user_num;
    string user_day;
    int invalid_entries_count = 0;
    vector<double> user_nums;
    vector<string> user_days;
    vector<string> valid_days = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday",
        "Mon", "Tue", "Wed", "Thur", "Fri"
    };

	while(true)
        {
            //Reset variables
            match = false;
            sum_nums = 0;

            //Read in user day
			cout << "Enter a day:\n";
			cin >> user_day;

			//Validate user day
			for(string x : valid_days)
            {
				if(x == user_day)
                {
                    user_days.push_back(user_day);
                    match = true;
                }

            }

            //Record bad entries for user_day
            if(match == false) {++invalid_entries_count;}

            //Read in user number value
			cout << "Enter a number:\n";
			cin >> user_num;

			//Store number value if user day is valid
            if(match == true) {user_nums.push_back(user_num);}

			//Print value pairs
			for(int i = 0; i < user_days.size(); ++i)
            {
                cout << user_days[i] << "," << user_nums[i] << " ";
            }

			cout << '\n';

            //Print sums to std::cout
			for(double j : user_nums) {sum_nums = sum_nums + j;};
            cout << "Bad entries: " << invalid_entries_count << '\n'
                 << "Sum of day entries: " << user_days.size() << '\n'
                 << "Sum of values: " << sum_nums << '\n';
        }
		 
		cout << "Goodbye\n";

    return 0;
}

