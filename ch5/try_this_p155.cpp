//try_this_p154.cpp
//=================
//Get the program on pg.154 to run. Check that the provided data sets (p.155) produce the given output numbers shown on page 155. Try and break the program with random input at the prompt. What is the least amount of input you can give it to fail?
//===============================================================================

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    double temp;
	double sum = 0;
	double high_temp = 0;
	double low_temp = 0;

	double set_1_sum = 0;
	double set_1_high_temp = 0;
	double set_1_low_temp = 0;

	double set_2_sum = 0;
	double set_2_high_temp = 0;
	double set_2_low_temp = 0;

    vector<double> set_1 = {
    -16.5, -23.2, -24.0, -25.7, -26.1, -18.6, -9.7, -2.4,
    7.5, 12.6, 23.8, 25.3, 28.0, 34.8, 36.7, 41.5,
     40.3, 42.6, 39.7, 35.4, 12.6, 6.5, -3.7, -14.3
    };

    vector<double> set_2 = {
    76.5, 73.5, 71.0, 73.6, 70.1, 73.5, 77.6, 85.3,
    88.5, 91.7, 95.9, 99.2, 98.2, 100.6, 106.3, 112.4,
    110.2, 103.6, 94.9, 91.7, 88.4, 85.2, 85.4, 87.7
    };

    vector<double> temps;

    cout << "Enter 5 floating point values:\n";

    for(int i = 0; i < 5; ++i)
    {
        cin >> temp;
		temps.push_back(temp);
    }

	for(double x : temps)
	{
		if(x > high_temp) high_temp = x;
		if(x < low_temp) low_temp = x;

		sum += x;
	}

	for(double i : set_1)
	{
		if(i > set_1_high_temp) set_1_high_temp = i;
		if(i < set_1_low_temp) set_1_low_temp = i;

		set_1_sum += i;
	}

	for(double j : set_2)
	{
		if(j > set_2_high_temp) set_2_high_temp = j;
		if(j < set_2_low_temp) set_2_low_temp = j;

		set_2_sum += j;
	}

	cout << "Your entries:\n";
    for(double x : temps)
        cout << x << " ";
	cout << "\nHigh temperature: " << high_temp << '\n';
	cout << "Low temperature: " << low_temp << '\n';
	cout << "Average temperature: " << sum / temps.size() << '\n';

	cout << "\ndata_set_1:\n";
	cout << "High temperature: " << set_1_high_temp << '\n';
	cout << "Low temperature: " << set_1_low_temp << '\n';
	cout << "Average temperature: " << set_1_sum / set_1.size() << '\n';

	cout << "\ndata_set_2:\n";
	cout << "High temperature: " << set_2_high_temp << '\n';
	cout << "Low temperature: " << set_2_low_temp << '\n';
	cout << "Average temperature: " << set_2_sum / set_2.size() << '\n';

    return 0;
}
