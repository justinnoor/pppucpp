#include "std_lib_facilities.h"

//Chapter 3 Try This, Page 73
//Get the program on pg.71 to work, test it with the - 
//sentence "She she laughed He He He because what he - 
//did did not look very very good good". 
//Answer the given questions.

int main()
{
    string previous = " ";
    string current;
  
    while(cin >> current) {
        if(previous == current)
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
