Chapter 3 Review
================

## Questions

1. What is meant by the term *prompt*?
2. Which operator do you use to read into a variable?
3. If you want the user to input an integer value into your program for a variable named **number**, what are two lines of code that you could write to ask the user to do it and to input the value into your program?
4. What is **\n** called and what purpose does it serve?
5. What terminates input into a string?
6. What terminates input into an integer?
7. How would you write:
		cout << "Hello, ";
		cout << first_name;
		cout << "!\n";
   as a single line of code?
8. What is an object?
9. What is a literal?
10. What kinds of literals are there?
11. What is a variable?
12. What are the typical sizes for a **char**, an **int**, and a **double**?
13. What measures do we use for the size of small entities in memory, such as ints and strings?
14. What is the difference between **=** and **==**?
15. What is a definition?
16. What is initialization and how does it differ from asisgnment?
17. What is string concatenation and how do you make it work in C++?
18. Which of the following names are legal in C++? If a name is not legal, why not?
    This_little_pig		This_1_is_fine		2_For_1_special
	lastest thing		the_$12_method		_this_is_ok
	MiniMineMine		number				correct?
19. Give five examples of legal names that you should'nt use because they are likely to cause confusion.
20. What are some good rules for choosing names?
21. What is type safety and why is it important?
22. Why can conversion from **double** to **int** be a bad thing?
23. Define a rule to help decide if a conversion from one type to another is safe or unsafe.


## Answers

1. A *prompt* instructs a user to take an action.
2. The *get-from* operator **>>** is used to read into a variable.
3. Two lines of code that would ask a user to input an integer named **number**:
        cout << "Please enter an integer: \n";
	    cin >> number;
4. **\n** is called a newline character which ends the line of a string.
5. An *end of file* character terminates input into a string. On Unix and Linux machines, that's **Ctrl D**, on windows machines, that's **Ctrl Z** followed by **Enter**.
6. An *end of file* character terminates input into an integer. On Unix and Linux machines,     that's **Ctrl D**, on windows machines, that's **Ctrl Z** followed by **Enter**.
7. cout << "Hello, "
        << first_name
        << "!\n";
8. An *object* is a place in memory where data is stored.
9. *Literals* represent values that represent C++ types, such as the literal "Hello World!", which represents type string.
10. Literals can come in the form of integers, floating-points, booleans, characters, strings, and pointers.
11. Variables are named object.
12. One byte of memorry is typically set aside for a **char**, 4 bytes for an **int**, and 8 bytes for a **double**.
13. Bits are used to measure the size of small entities in memory, such as **ints** and **strings**.
14. **=** is an *assignment* operator, and **==** is an *equals* operator.
15. Definitions are used to declare memory that is set aside for an object.
16. Assignment puts a new value into a variable, unlike initialization, which gives an initial value to a  variable.
17. String concatenation combines strings together with the **+** operator, i.e., "Hello " **+** "World!" = "Hello World".
18. The legal names of this list include: This_little_pig, This_1_is_fine, _this_is_ok, MiniMineMine, and number. The remaining names are illlegal because, either do not start with letters, and/or they include something other than letters, digits, and underscores, 
19. These five names would likely cause confusion: my_arraY, var000, ALL_CAPS, xl, and String (with a capital S).
20. Some best practices for choosing variable names include: avoiding names that are too long, avoiding names that are easy to mistype (i.e. o vs 0), avoiding names with ALL_CAPS, and to always use underscores to separate words when possible (i.e. my_var vs MyVar).
21. Type safety refers to the use objects in accordance to the rules their type, i.e. storing a **char** value inside of an **int** object. Type safety is important because the compiler cannot always identify type safety for you, which could lead to problems down the road, such as losing information from a value.
22. Converting a **double** to an **int** is considered a bad thing because the **double** will be truncated and rounded down so that it fits into the smaller **int** object, also known as a narrowing conversion.
23. In general, a conversion is considered safe if a value can be converted to an equal value without losing information, i.e. converting an **int** to a **double** would be acceptable because the **int** fits into the memory of the **double** object.
