#include "std_lib_facilities.h"

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

	cout << "Welcome to the USD currency convertor!\n\n";
	cout << "Enter 'y' for yen, 'k' for kroner, or 'p' for pounds? \n\n";
	cin >> currency;

	cout << "Enter the amount you wish to convert: \n\n";
    cin >> amount;

	switch(currency) {
        case 'y':
		    conversion = amount / yen;
            cout << amount << " yen = " << conversion << " USD\n";
            break;
	    case 'k':
		    conversion = amount / kroner;
            cout << amount << " kroner = " << conversion << " USD\n";
            break;
	    case 'p':
		    conversion = amount / pound;
            if(amount == 1)
                cout << amount << " pound = " << conversion << " USD\n";
            else
                cout << amount << " pounds = " << conversion << " USD\n";
            break;
	    default:
		    cout << "Sorry, I am not familiar with that currency.\n\n";
            break;
    }

	return 0;
}

