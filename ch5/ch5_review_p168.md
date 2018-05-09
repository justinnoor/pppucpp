Chapter 5 Review, Pg.168
========================

## Questions
1. Name four major types of errors and briefly define each one.
2. What kind of errors can we ignore in student programs?
3. What guarantees should every completed project offer?
4. List three approaches we can take to eliminate errors in programs and produce acceptable software.
5. Why do we hate debugging?
6. What is a syntax error? Give five examples.
7. What is a type error? Give five examples.
8. What is a linker error? Give three examples.
9. What is a logic error? Give three examples.
10. List four potential sources of program errors discussed in this text.
11. How do you know if a result is plausible? What techniques do you have to answer such questions.
12. Compare and contrast having the caller of a function handle a run-time error vs. the called function's handling the run-time error.
13. Why is using exceptions a better idea than returning an "error value"?
14. How do you test if an input operation succeeded?
15. Describe the process of how exceptions are thrown and caught.
16. Why, with a **vector** called **v**, is v[v.size()] a range error? What would be the result of calling this?
17. Define *pre-condition* and *post-condition*; give an example (that is not the area() function from this chapter), preferablly a computation that requires a loop.
18. When would you *not* test a pre-condition?
19. When would you *not* test a post-condition?
20. What are the steps in debugging a program?
21. Why does commenting help when debugging?
22. How does testing differ from debugging?

## Answer
1. Four major types of errors are 1) compile-time erros, 2) link-time errors, 3) run-time errors, and 4) logic-errors. Compile-time errors are are found exclusively by the compiler, and will prevent the programmer from creating an executable. Link-time errors are found exclusively by the linker, and will also preven the programmer from creating an executable. Run-time errors are detected by checks withing a running program either by the programmer's code, the computer itself (hardware/system errors), or by a library.
2. While a student is first learning to program, they can ignore, within reason, hardware errors, system software errors, and also the practice of formally terminating a program if an error is found.
3. Every completed project should generate the intended results for legal inputs, generate errors for illegal inputs, not be concerned with hardware or system-specific issues, and successfully terminate upon detecting an error.
4. Three approaches to produce acceptable software include: 1) organize software around minimizing errors, 2) detect and remove the majority errors through debugging and testing, and 3) ensure that any undetected errors are manageble.
5. Programmer hate debugging becuase it allegedly consumes 90% of the software development process.
6. A **syntax error** is a grammatical error that does accord with the rules of C++ grammar. Five examples include: 1) a typo **Int** instead of **int**, 2) a non-terminated character **("mystring)**, 3) a missing semicolon **int x = 1**, 4) a missing parenthesis **while(true**, and 5) an un-terminated block **vector<string> v = {"mystring";**.
7. A **type error** is a mismatch between a declared type and an assigned value. Five examples include: 1) **int x = "seven";**, 2) **bool a = "true";** 3) **string x = 7;**, 4) undeclared functions, i.e. **eror()** instead of **error()**, and 5) bad arguments, i.e. **area(int x, int y)** cannot be called like this **area(5)**.
8. A linker error is one that is detected by the linker as it attempts to compile various parts of a program, such as a *header* or a *library*, into an executable. Three examples include: 1) an undeclared function (missing all-together), 2) a missing header, and 3) a bad definition within a function outside of **main()**.
9. A logic error is one that simply produces bad outputs (or none at all), despite the fact that the program did not generate any compiler, linker, or run-time errors. Three exampes include: 1) function **myfunc()** returns **int a * int b**, but **5 * 5** is returned as **10**, 2) the value of an object of type **int** was initialized by the programmer and mistakenly prevented user from entering data, i.e. **int x = 0; for(int y; cin >> y;) {if(y < x) //...do something useful...** would only work if the user entered negative values, and 3) similarly, if a programmer initialized **vector<char> v(5);** and asked the user to input all integers, the program would also accept letter-characters.
10. Four potential sources of bad input include: 1) poor specification (of a problem or goal), 2) unexpected arguments (i.e. too many in a function), 3) unexpected input (i.e. "f@#$ you" by a user), and 4) incomplete programs (a function that the programmer declared by dod not define).
11. A result is plausible if a program does what it is supposed to do, after passing all of the checks and techniques used in the entire error management process. This includes not only the default compiler, linker, run-time, and logic errors, but also techniques such as **estimation**, **debugging practices** (i.e. commenting, easy-to-read code, using libraries), **pre-conditions**, **post-conditions**, and **testing**.
12. When run-time errors are handled by the caller, the end result is often a messy, bloated, program due to the fact that the error checks must be written inside of **main()**, usually in the form of many **if**-statements. To the contrary, when the callee handles run-time errors, these checks can be separated from **main()**, either in another function, library, or header file, relieving it from excessive details. In sum, it is desirable to have the callee deal with run-time errors, unless there is a valid reason not to do so. In fact, there are times when it is absolutely necessary to have the caller handle run-time errors. Many libraries, for example, are off-limits and cannot be modified, therefore, in these types of situations the caller must handle run-time errors.
13. Returning an "error-value" via a function, whether it is returned by the caller or callee, can be a cumbersome way handling errors. The "error-value" might be difficult to access, or hard to find when there are hundreds, or maybe thousands of functions in a program. Moreover, if errors are dealt with by the caller, some code will have to be written to handle every return value for every function that returns an "error-value". Thankfully, **exceptions** provide a much cleaner, systematic, and versatile way of managing errors because they completely separate the detection of an error from the handling of an error. **Exceptions** are, therefore, preferred over returning an "error-value" from a function.

14. An input operation can be tested with the following code: **if(cin) {//...print something;} else {//...print something else;}**. The key piece of code is the **if(cin)** statement, which essentially translates to  "if the input is good".

15. Instead of defining and returning an "error-value" inside of a function, with **exceptions** a **throw** command is defined, which breaks out of the function, and takes the program back into **main()**. Once there, the error is "caught" with a **catch** command. From here, the error can be dealt with according to the programmer's preferences, in just about any way imaginable, whether simple or complex.

16. If a vector called **v** had five elements, its size would be 5, but its index range would be 0 thru 4. Therefore, the code **v[v.size()]** would be the same as calling **v[5]**, and would result in a range error.

17. *Pre-conditions* and *post-conditions* are both methods of detecting errors. Pre-conditions are defined before the return value of a function, requiring its arguments to meet some condition, i.e **int myint(int i) {if(i <= 0) error("bad int"); return i * 5;}**. Post-conditions state a requirement for the return value itself, i.e. **int myint(int i) {if(i <= 0) error("pre-condition"); int j = i * 5; if(j <= 0) error("post-condition");}**.  

18. There are times when pre-conditions would not be used. For example, if it were somehow guaranteed that no bad arguments would be given to a function, or for performance reasons, or if the pre-condition required more work than the actual execution of a function.

19. There are times when post-conditions would not be used, and those are for the same exact reasons stated for pre-conditions above in question 18.

20. The steps of the debugging process are simple when stated but complex in practice. They include: 1) ensure the program compiles, 2) ensure the program links, and 3) ensure the program does what it is supposed to.

21. Commenting helps immensely during debugging process because it helps communicate what the program is supposed to do, and thus what it should be checked for. It also helps with countless aspects of the entire process, such as knowing who wrote the code, when it was written, who it was written for, version numbers, etc.

22. Debugging and testing are similar in many ways, but they do have some key differences. Debugging is the process of finding and removing errors, and ultimately getting a program to do what it is supposed to do at a fundamental level. Testing, on the other hand, comes after debugging, and is an extremely systematic way of checking a program that involves giving it a large, and well-planned set of inputs. The results, or outputs, generated with those inputs are then rigorously analyzed, typically by a team of highly skilled software developers.
