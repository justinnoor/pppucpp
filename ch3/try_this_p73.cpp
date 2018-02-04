#include "std_lib_facilities.h"

int main()
{
    string previous = " ";
    string current;
    while (cin >> current) {
        if (previous == current)
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}

//Answers:
//This program should produce 5 repeated words.
//There are only 5 repeats because the program is case sensitive.
//Therefore, 'he' and 'He' would not count as a repeat.
//Words are combinations of characters separated by whitespaces.
//Repeated words are combinations of characters that match exactly.
