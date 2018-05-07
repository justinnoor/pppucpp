//try_this_p156.cpp
//=================
//Look online to find the coldest and hottest temperatures ever recorded on the planet earth. Use fahrenheit as a unit of measure. Add these numbers to the program on p.156 and make it work. Store the values in objects 'min_temp' and 'max_temp'.
//=============================================================================

#include "std_lib_facilities.h"

using namespace std;

int main()
{
    double max_temp = -136.0; //Antarctica
    //https://science.nasa.gov/science-news/science-at-nasa/2013/09dec_coldspot/
    double min_temp = 134.0; //Death Valley, CA
    //https://www.nps.gov/deva/learn/nature/weather-and-climate.html 
    double sum = 0;

    int no_of_temps = 0;

    for (double temp; cin >> temp;) {
        ++no_of_temps;
        sum += temp;
        if(temp > max_temp) max_temp = temp;
        if(temp < min_temp) min_temp = temp;
    }

	cout << "High temperature: " << max_temp << '\n';
 	cout << "Low temperature: " << min_temp << '\n';
 	cout << "Average temperature: " << sum / no_of_temps << '\n';
 
    return 0;
}
