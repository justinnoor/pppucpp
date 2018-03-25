#include "std_lib_facilities.h"

using namespace std;

//Chapter 4 Drill, Step 7, Page 126
//Modify the previous program so that it adds a unit of measure (i.e. 5cm).
//Read the unit into a string. Accept units 'cm', 'm', 'in', and 'ft'.
//Assume conversion factors m-to-cm, in-to-cm, and ft-to-in.

//To briefly reiterate the goals of this program, the same operations are - 
//performed and printed to the screen. Only this time, a unit of measure is thrown - 
//into the picture, in the form of a 'string' value. The 'double' values must be - 
//handled according to their corresponding units of measure. For example, 1in is - 
//greater than 1cm. The 'double' and 'string' values are separate inputs and need - 
//to be treated as such. For example, "5cm" is really 'double 5', and 'string cm' - 
//printed together on the screen. As always, let me know how I can improve this!


//This program begins with some unit conversion functions. The instructions say - 
//to "assume" conversion factors 'm-to-cm', 'in-to-cm', and 'ft-to-in'. Whether - 
//or not this is a requirement is not entirely clear. Never-the-less, this program - 
//assumes that the "assumed" conversions are intended to be applied to the user's - 
//inputs. If you decide to bypass these conversions, your life will probably be alot - 
//easier. But what the hell, challenges are fun so this program will make our lives - 
//difficult. Below are the the required functions for the "assumed" conversions:
double m_to_cm(double x)
{
    return x * 100;
}

double in_to_cm(double y)
{
    return y * 2.54;
}

double ft_to_in(double z)
{
    return z * 12;
}

//The remaining 'to-meter' functions will be explained below
double cm_to_m(double a)
{
    return a / 100;
}

double in_to_m(double b)
{
    return b * .0254;
}


int main()
{
    double val_1;
    double val_2 = 0;//Something needs to be in memory for the user's first input
    double val_3;
    double val_4 = 0;//Something needs to be in memory for the user's first input

    string unit;
    string valid_unit_1;//This will make sense later
    string valid_unit_2;//This will make sense later

    cout << "\nEnter a positive value and a unit of measure (i.e. 5cm)\n"
         << "When finished, enter '|' to exit\n";

    while(true)
    {
        cin >> val_1;
  
        //If non-numberic values are accidently read into 'val_1', an infinite loop - 
        //will occurr. Below is a Unix hack to prevent this from happening. Obviously - 
        //this is monkey business. Surely there are more sophisticated ways of - 
        //acheiving this, but in these early chapters of the book, a hack will suffice.
        //This should work on most Unix machines, but may not work across platforms.
        //Do whatever is needed to prevent infinite loops from occurring.
        if(val_1 <= 0)
            cout << "You must enter a positive value\n";
        if(val_1 <= 0)
            break;


        //This program is supposed to reject inputs when the user does not provide a - 
        //unit of measure. In other words, it is supposed to reject empty string values. 
        //It appears that the STL getline() function is a good option for this. This - 
        //function will input an empty string value into 'string unit' if the user - 
        //presses the enter key without providing a unit of measure. This will provide - 
        //the ability to verify whether 'string unit' is empty or not.
        getline(cin, unit);

        if(unit.empty())
            cout << "Sorry, you must enter a unit of measure\n";
        if(unit.empty())
            break;


        //The required units of measure are "cm", "m", "in" and "ft", and nothing else.
        //This program will actually use 'string unit' as a validator, that filters - 
        //through the user's inputs. If 'string unit' is not an accepted value, the - 
        //loop will break. Otherwise, it will be assigned to 'string valid_unit'.
        //Using two variables will help with some of the challenges that are to come.
        if(unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
            valid_unit_1 = unit;
        else
            cout << "You must enter a valid unit\n";
        if(unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
            valid_unit_1 = unit;
        else
            break;


        //Recall that the user needs the ability to exit the program when finished - 
        //by entering the '|' character.
        if(unit == "|")
            break;


        //Before performing the final operations, the "assumed" conversions must - 
        //be applied. This step obviously feels redundant because it essentially - 
        //converts everything to either 'cm' or 'in', but we're not going to argue - 
        //with the instructions. It also feels like a repeat of the validation steps - 
        //at lines 102-109. However, if everything were converted there, things would - 
        //be even more redundant. To understand this, try performing these conversions - 
        //at the previous validation steps. Moving forward, this is where the two - 
        //separate 'string' variables come in handy.

        //m-to-cm
        if(unit == "m")
            valid_unit_1 = "cm";
        if(unit == "m")
            cout << val_1 << unit << " = " << m_to_cm(val_1) << valid_unit_1 << '\n';
        if(unit == "m")
            val_1 = m_to_cm(val_1);

        //in-to-cm
        if(unit == "in")
            valid_unit_1 = "cm";
        if(unit == "in")
            cout << val_1 << unit << " = " << in_to_cm(val_1) << valid_unit_1 << '\n';
        if(unit == "in")
            val_1 = in_to_cm(val_1);

        //ft-to-in
        if(unit == "ft")
            valid_unit_1 = "in";
        if(unit == "ft")
            cout << val_1 << unit << " = " << ft_to_in(val_1) << valid_unit_1 << '\n';
        if(unit == "ft")
            val_1 = ft_to_in(val_1);


        //The required operations can now be performed. But wait, the program - 
        //is not smart enough to determine whether 1.5in is smaller than 1.5ft. It - 
        //only compares number values. It seems like a logical way around this is - 
        //to convert everything to the same unit of measure. So then what's the - 
        //point of the "assumed" conversions above? It could be that in the end, - 
        //only a handful of units are left to deal with, which makes things easier.
        //But that's really a question that only the author knows the answer to.
        //Dr. Stroustrup is known for throwing curve ball challenges at his students, - 
        //and we're not going to argure with the master. Besides, if you're not - 
        //failing you're not learning, right?

        //Okay enough ranting. Moving forward, this is where 'double val_3' and - 
        //'double_val_4' are used. The "assumed" conversions will be converted once - 
        //more into meters, and read into 'double val_3' and 'double val_4', where - 
        //they can be used for the final operations. Remember, at this point, the - 
        //"assumed" conversions have converted 'double val_1' to either 'cm' or 'in'.
        if(valid_unit_1 == "cm")
            val_3 = cm_to_m(val_1);
        if(valid_unit_1 == "in")
            val_3 = in_to_m(val_1);


        //Now the final operations can be performed
		if(val_4 == 0)
			cout << val_1 << valid_unit_1 << " is the largest value so far\n";

		else if(val_3 < val_4 && valid_unit_1 == "cm")
			cout << val_1 << valid_unit_1 << " is the smallest value so far\n"
				 << val_2 << valid_unit_2 << " is the largest value so far\n";
		else if(val_3 < val_4 && valid_unit_1 == "in")
			cout << val_1 << valid_unit_1 << " is the smallest value so far\n"
				 << val_2 << valid_unit_2 << " is the largest value so far\n";
		else if(val_3 > val_4 && valid_unit_1 == "cm")
			cout << val_1 << valid_unit_1 << " is the largest value so far\n"
				 << val_2 << valid_unit_2 << " is the smallest value so far\n";
		else if(val_3 > val_4 && valid_unit_1 == "in")
			cout << val_1 << valid_unit_1 << " is the largest value so far\n"
				 << val_2 << valid_unit_2 << " is the smallest value so far\n";

		else if(val_3 == val_4)
			cout << val_1 << valid_unit_1 << " & " << val_2 << valid_unit_2 
                 << " are equal\n";

        //Remember this task? Previously, if the inputs were within .01in of - 
        //eachother, it was necessary to print a message to the screen that read - 
        //"these values are alomst equal", or something to that affect. However, - 
        //now the conversion is in meters so it changes from .01in to .000254m.
		if(val_3 - val_4  >= -.000254 && val_3 - val_4 <= .000254 && val_3 - val_4 != 0)
			cout << val_1 << " & " << val_2 << " are almost equal\n";

        val_2 = val_1;
        val_4 = val_3;

        valid_unit_2 = valid_unit_1;
    }

    cout << "Goodbye. Please come back and try again later.\n";
 
	return 0;
}

