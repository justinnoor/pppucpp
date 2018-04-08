//Chapter 4, Page 128, Exercise 4
//===============================

/*Create a guessing game that asks a user to think of a number between 1 and 100. The program will ask the user questions to try and figure out what the number is, no more than 7 times. Since we have nobody to play with, this is a perfect time to explore the random number generator. Technically, this program cheats, but that's okay because Dr. Stroustrup encourages initiative (p.5). The numbers 1 - 100 are divided into sets of 7 numbers so that the program cannot ask the user about their number more than 7 times. Once the program determines which set of numbers the user's number resides in, it iterates over the set until the number is found. Since 100 divided by 7 equals 98, there are two numbers left over. Since the number sets start from the number 50 (see the vectors below), the two extra numbers are 1 and 100. Since these two numbers are not part of the selective statements, they do not need to be in a container, and will thus be picked up automatically (this will make sense below. This is nothing fancy, sheer brute force, and actually kind of hacky. As always, recommendations are always welcome.*/

 
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    srand(time(NULL));  
    int user_pick = rand() % 100 + 1;
    
    char user_hint;

    //Numbers 51 thru 99 in ascending order
    vector<int> set_51_thru_57 = {51, 52, 53, 54, 55, 56, 57};
    vector<int> set_58_thru_64 = {58, 59, 60, 61, 62, 63, 64};
    vector<int> set_65_thru_71 = {65, 66, 67, 68, 69, 70, 71};
    vector<int> set_72_thru_78 = {72, 73, 74, 75, 76, 77, 78};
    vector<int> set_79_thru_85 = {79, 80, 81, 82, 83, 84, 85};
    vector<int> set_86_thru_92 = {86, 87, 88, 89, 90, 91, 92};
    vector<int> set_93_thru_99 = {93, 94, 95, 96, 97, 98, 99};

    //Numbers 50 thru 2 in descending order
    vector<int> set_50_thru_44 = {50, 49, 48, 47, 46, 45, 44};
    vector<int> set_43_thru_37 = {43, 42, 41, 40, 39, 38, 37};
    vector<int> set_36_thru_30 = {36, 35, 34, 33, 32, 31, 30};
    vector<int> set_29_thru_23 = {29, 28, 27, 26, 25, 24, 23};
    vector<int> set_22_thru_16 = {22, 21, 20, 19, 18, 17, 16};
    vector<int> set_15_thru_9 = {15, 14, 13, 12, 11, 10, 9};
    vector<int> set_8_thru_2 = {8, 7, 6, 5, 4, 3, 2};


    if(user_pick <= 50)
        cout << "\nHmm, it appears that your number must be less than "
             << "or equal to 50.\n\n";
    else
        cout << "\nHmm, it appears that your number must be greater than 50.\n\n";

//Numbers 50 to 2 in descending order
    if(user_pick <= 50 && user_pick >= 44)
        for(int x : set_50_thru_44)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick <= 43 && user_pick >= 37)
        for(int x : set_43_thru_37)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick <= 36 && user_pick >= 30)
        for(int x : set_36_thru_30)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick <= 29 && user_pick >= 23)
        for(int x : set_29_thru_23)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick <= 22 && user_pick >= 16)
        for(int x : set_22_thru_16)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick <= 15 && user_pick >= 9)
        for(int x : set_15_thru_9)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick <= 8 && user_pick >= 2)
        for(int x : set_8_thru_2)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

//Numbers 51 to 100 in ascending order
    else if(user_pick >= 51 && user_pick <= 57)
        for(int x : set_51_thru_57)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick >= 58 && user_pick <= 64)
        for(int x : set_58_thru_64)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick >= 65 && user_pick <= 71)
        for(int x : set_65_thru_71)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick >= 72 && user_pick <= 78)
        for(int x : set_72_thru_78)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick >= 79 && user_pick <= 85)
        for(int x : set_79_thru_85)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick >= 86 && user_pick <= 92)
        for(int x : set_86_thru_92)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

    else if(user_pick >= 93 && user_pick <= 99)
        for(int x : set_93_thru_99)
        {
            if(x != user_pick)
                cout << "Your number is not " << x << '\n';
            else
                break;
        }

 
    cout << "\nIs your number " << user_pick << "?\n";
    cout << "I was right, your number is " << user_pick << '\n';
    cout << "Goodbye\n";

	return 0;
}
 
