#include "std_lib_facilities.h"

using namespace std;

//Write a program that prompts the user to enter the amount of -
//coins they have. Print the amounts individually. Account for -
//singular and plural values, i.e., 2 dimes verses 1 dime. Report -
//the sum as a float with a dollar sign, i.e., $5.68. 

int main()
{
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int half_dollars;

    cout << "How many pennies do you have?\n";
    cin >> pennies;
    cout << "How many nickels do you have?\n";
    cin >> nickels;
    cout << "How many dimes do you have?\n";
    cin >> dimes;
    cout << "How many quarters do you have?\n";
    cin >> quarters;
    cout << "How many half-dollars do you have?\n";
    cin >> half_dollars;

    if (pennies == 1)
       cout << "You have " << pennies << " penny\n";
    else
       cout << "You have " << pennies << " pennies\n";

    if (nickels == 1)
       cout << "You have " << nickels << " nickel\n";
    else
       cout << "You have " << nickels << " nickles\n";

    if (dimes == 1)
       cout << "You have " << dimes << " dime\n";
    else
       cout << "You have " << dimes << " dimes\n";

    if (quarters == 1)
       cout << "You have " << quarters << " quarter\n";
    else
       cout << "You have " << quarters << " quarters\n";

    if (half_dollars == 1)
       cout << "You have " << half_dollars << " half-dollar\n";
    else
       cout << "You have " << half_dollars << " half-dollars\n";

    cout << "The value of all of your coins is $"
         << pennies * .01 + nickels * .05 + dimes * .10 + quarters * .25 + half_dollars *.50
         << "\n";

	return 0;
}

