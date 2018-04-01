//Chapter 4, Exercise 2, Page 128
//===============================

/*Read a sequence of doubles into a vector. Each value will represent a distance between two cities along a route. Find the total distance of the route, the smallest and greatest distances along the route, and the mean distance of the route. Print the answers to the screen.*/


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    vector<double> distances;

    double total_sum = 0;

    cout << "Enter your current distance traveled:\n";

    for(double distance; cin >> distance;)
        distances.push_back(distance);

    sort(distances);

    if(distances.size() % 2 == 0)
        distances.push_back(distances[distances.size() - 1] - 1);
        /*If the user creates a vector with an even number of elements, a new element            must be inserted to fulfill the definition of "median". The above line inserts an        element that is less than the largest one, by subtracting 1 from the largest             element. This new element "should" be second-to-last (it doesn't really matter).         Indeed there are other ways to accomplish this task, but it's getting late!*/

    sort(distances);

    cout << "The numbers you entered are:\n";
    
    for(double x : distances)
        total_sum = total_sum + x;

    cout << "Your numbers are:\n";
    for(double x: distances)
        cout << x << '\n';

    if(distances.size() % 3 == 0)
        cout << "\nThe sum of all distances is: " << total_sum << '\n';
    else
        cout << "\nThe sum of all distances is: "
             << total_sum - distances[distances.size() - 2] << '\n';

    cout << "The smallest distance is: " << distances[0] << '\n';
    cout << "The largest distance is: " << distances[distances.size() - 1] << '\n';
    cout << "Your median number is: " << distances[distances.size() / 2] << '\n';

	return 0;
}

