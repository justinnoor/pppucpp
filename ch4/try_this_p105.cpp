#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	constexpr double yen = 104.60;
	constexpr double kroner = 5.66;
	constexpr double pound = .67;
	constexpr double usd = 1.00;
	 
	char currency;
	double amount;
	double conversion;

	cout<<"Welcome to the USD currency convertor!\n\n";
	cout<<"Enter 'y' for yen, 'k' for kroner, or 'p' for pounds? \n\n";
	cin>>currency;

	cout<<"Enter the amount you wish to convert: \n\n";
    cin>>amount;

	if(currency == 'y')
		conversion = amount / yen;
	else if(currency == 'k')
		conversion = amount / kroner;
	else if(currency == 'p')
		conversion = amount / pound;
	else
		cout << "Sorry, I am not familiar with that currency.\n\n";

    if(currency == 'y')
        cout << amount << " yen = " << conversion << " USD\n";
    else if(currency == 'k')
        cout << amount << " kroner = " << conversion << " USD\n";
    else if(currency == 'p'&& amount < 1 || amount > 1)
        cout << amount << " pounds = " << conversion << " USD\n";
    else if(currency == 'p' && amount == 1)
        cout << amount << " pound = " << conversion << " USD\n";

	return 0;
}

