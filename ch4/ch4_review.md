Chapter 4 Review
================

## Questions

1. What is a computation?
2. What do we mean by inputs and outputs to a computation? Give examples.
3. What are the three requirements a programmer should keep in mind when expressing
   computations?
4. What does an expression do?
5. What is the difference between a statement and an expression, as described in this 
   chapter?
6. What is an lvalue? List the operators that require an lvalue. Why do these operators,    and not others, require an lvalue?
7. What is a constant expression?
8. What is a literal?
9. What is a symbolic constant and why do we use them?
10. What is a magic constant? Give examples.
11. What are some operators that we can use for integers and floating-point values?
12. What operators can be used on integers but not on floating-point numbers?
13. What are some operators that can be used for **strings**?
14. When would a programmer prefer a **switch**-statement to an **if**-statement?
15. What are some common problems with **switch**-statements?
16. What is the function of each part of the header line in a **for**-loop, and in what 
    sequence are they executed?
17. When should the **for**-loop be used and when should the **while**-loop be used?
18. How do you print the numeric value of a **char**?
19. Describe what the line **char foo(int x)** means in a function definition.
20. When should you define a separate function for part of a program? List reasons.
21. What can you do to an **int** that you cannot do to a **string**?
22. What can you do to a **string** that you cannot do to an **int**?
23. What is the index of the third element of a **vector**?
24. How do you write a **for**-loop that prints every element of a **vector**?
25. What does **vector<char> alphabet(26);** do?
26. Describe what **push_back()** does to a **vector**.
27. What does **vector**'s member **size()** do?
28. What makes **vector** so popular/useful?
29. How do you sort the elements of a **vector**?


## Answers
1. Computation means taking some inputs and generating some corresponding outputs.
2. Inputs and outputs to a computation are forms of information traveling in-and-out of
   a computer, or to-and-from a part of a computer program.
3. Correctness, simplicity, and efficiency are three obligations that a programmer 
   should adhere to when expressing computations.
4. An expresssion is a computation that produces a value from operands.
5. As described in this chapter, a statement and an expression are different because a 
   an expression produces a value, while a statement utilizes expressions to express
   more complex operations, such as producing multiple values, conditional operations,      or getting input and output to and from a computer.
6. As described in this chapter, an lvalue is the operand that is found on the left-hand
   side of an assignment operator, including compound assignment operators. Since an 
   assignment operator modifies an operand, it requires an lvalue or else it would be an
   incomplete expression, such as **= 10;**. A list of operators requiring lvalues
   includes: **=**, \***=**, **+=**, **-=**, **\+**, and **%=**.
7. A constant expression is a named object which cannot be given a new value after it has
   been initialized.
8. A literal is a notated value, such as 5 representing the integer five, and is the 
   simplest form of an expression. In the expression statement **int a = 5;**, 5 is the
   literal value.
9. A symbolic constant is a constant expression, which is used in situations where
   constants should not be changed, such as the value of **pi**. Symbolic constants also 
   help make code organized and easy to understand, especially in large programs that
   use the same expression multiple times.
10. Magic constants are vaguely, or poorly expressed expressions. The expression statement    **double a = 3.14159;** could be a magic constant because the lvalue **a** does not      clearly express how or why the rvalue was derived. Renaming it **double pi = 3.14159**  would be sensical.
11. Some operators that can be used for both integers and floating point values include      **=** assignment, **+** addition, **-** substraction, * multiplication, **/**            division, **++** increment by 1, **--** decrement by 1, **+= n** increment by n,         **-+** decrement by 1, \*= multiply and assign, **/=** divide and assign, **a >> b**     read from a to b, **a << b** write b to a, **==** equals, **!=** not equal, **>**        greater than, **>=** greater than or equal to, **<** less than, **<+** less than or      equal to, just to name a few.
12. Some operators that can be used with integers but not float point values include the     **%** modulo operator, and the **%=** remainder and assign operator.
13. Some operators that can be used with strings include **=** assignement, **+**            concatenation, **+=** add to end, **a >> b** read from **a** into **b**, **a << b**      write **b** to **a**, **==** equals, **!=** not equal, **>** greater than, **>=**        greater than or equal, **<** less than, and **<=** less than or equal.
14. A **switch** statement would be prefered over an **if**-statement when, for example,     there are many selection based user inputs that are compared to many constants,          resulting in more idiomatic code.
15. Some common issues that programmers have with **switch**-statements are forgetting to    **break** each case, and failing to use distinct **constexpr**'s for each case.          However, to avoid tedious or repetitive code, it is possible to use multiple case        labels with a single action.
16. The header line of a **for**-loop can have three parts: an initializer, a loop condit    ion,and an increment option. The initializer initializes the loop's required object,     the loop condition tests the loop variable, and the increment option increments the      loop variable.
17. A **for**-loop should always be used when it is possible to define a loop with the       three components mentioned above: an initializer, a loop condition, and an increment     option. A **while**-loop should be used when these three options are not possible.
18. To print the numeric value of a **char**, it can safetly be converted into a type        **int**. However, attempting to convert a type **int** into a type **char** could        result in the narrowing of the **int**.
19. In a function definition, the line **char foo(int x)** is a function named **foo**       that returns a type **char** with an argument of **int x**.
20. A separate function should be implemented in a program when an isolated, and labeled,    computation is desired so that it becomes portable and easily used in other places       throughout the program, makes the program easier to read, and facilitates testing.
21. Unlike a **string**, addition can be performed on an **int**. Strings cannot be          added, because it simply does not make sense grammatically and mathematically.
22. Unlike an **int**, concatenation can be performed on a **string**. For example, with     a **string**, **"5" + "5"** becomes **"55"**, and **"yes" + " mam"** becomes             **"yes mam"**. With an **int**, **5 + 5 == 10**.
23. The index of the third element of a **vector** is **[2]**.
24. With a **for**-loop, every element of **vector<string> myvect** can be printed           with the following code:                                                                               **for(string i : myvect)**                                                                     **cout << i << '\n';**
25. The expression statement **vector<char> alphabet(26)** initializes a vector of 26        **chars** to an empty value '', allocating 26 spaces of memory accordingly.
26. The **push_back()** function adds an element to the back of a vector.
27. The **vector** member function **size()** counts the number of elements in a vector.
28. The use of **vector** is so popular because it allows programmers to manage data         without having to specify a **vector** size in advance.
29. The elements of a **vector** can be sorted with the **sort()** function.
     
