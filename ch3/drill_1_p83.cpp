#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of a friend you want to write to:\n";
    string first_name;
    cin >> first_name;
    cout << "Now enter the name of another friend:\n";
    string second_friend;
    cin >> second_friend;
    cout << "Enter 'f' or 'm' to specify the gender of the second friend:\n";
    char friend_sex;
    cin >> friend_sex;
    string friend_inquiry;

    if (friend_sex == 'f')
        friend_inquiry = "her";
    else
        friend_inquiry = "him";
    
    cout << "Enter the the age of the first friend:\n";
    int age;
    cin >> age;
    string age_comment;

    cout << "\nDear " << first_name << ",\n\n"
         << "\tI hope this message finds you well.\n"
         << "Have you seen " << second_friend << " lately?\n"
         << "If you see " << friend_inquiry << ", please ask "
         << friend_inquiry << " to call me.\n"
         << "I hear you are now " << age << " years old!\n";

         if (age < 12)
             cout << "Next year you will be " << ++age << "!\n";
         else if (age == 17)
             cout << "Next year you'll be able to vote!\n";
         else if (age > 70)
             cout << "I hope you're enjoying retirement!\n";

    cout << "\nYours sincerely, \n\n"
         << "Justin Noor\n\n";
}
