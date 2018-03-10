#include "std_lib_facilities.h"

using namespace std;

//Chapter 3 Ex.11 Pg.86
//Write a program that prompts the user to enter the number of - 
//pennies, nickels, dimes, quarters, half-dollars, and one-dollar - 
//coins they have. Query the user, and print these values separately.
//Print the combined total in dollars and cents, i.e., $1.57.
//All values must be grammatically correct, i.e.,"one dime", not "one dimes".

int main()
{
    double pennies;
    double nickels;
    double dimes;
    double quarters;
    double half_dollars;
    double dollar_coins;

	cout << "\nWelcome to the C++ change calculator!\n\n";

    cout << "Enter the number of pennies you have:\n";
    cin >> pennies;
    cout << "Enter the number of nickels you have:\n";
    cin >> nickels;
    cout << "Enter the number of dimes you have:\n";
    cin >> dimes;
    cout << "Enter the number of quarters you have:\n";
    cin >> quarters;
    cout << "Enter the number of half-dollars you have:\n";
    cin >> half_dollars;
    cout << "Enter the number of dollar-coins you have:\n";
    cin >> dollar_coins;

    cout << "\nTotals:\n";

    if(pennies == 1)
        cout << "You have " << pennies << " penny\n";
    else 
        cout << "You have " << pennies << " pennies\n";
    if(nickels == 1)
        cout << "You have " << nickels << " nickel\n";
    else
        cout << "You have " << nickels << " nickels\n";
    if(dimes == 1)
        cout << "You have " << dimes << " dime\n";
    else
        cout << "You have " << dimes  << " dimes\n";
    if(quarters == 1)
        cout << "You have " << quarters << " quarter\n";
    else
        cout << "You have " << quarters << " quarters\n";
    if(half_dollars == 1)
        cout << "You have " << half_dollars << " half-dollar\n";
    else
        cout << "You have " << half_dollars << " half-dollars\n";
    if(dollar_coins == 1)
        cout << "You have " << dollar_coins << " dollar-coin\n";
    else
        cout << "You have " << dollar_coins << " dollar-coins\n\n";

    pennies = pennies / 100;
    nickels = nickels / 20;
    dimes = dimes / 10;
    quarters = quarters / 4;
    half_dollars = half_dollars / 2;

    cout << "\nYou have a combined total of: $"
         << pennies + nickels + dimes + quarters + half_dollars + dollar_coins
         << '\n' << '\n';

	return 0;
}

