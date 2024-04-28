<!--------------------------------------------------------------------------------------->
# <span style="color:darkseagreen">Book C++ Primer Fith Edition - Solutions<span>

<!--------------------------------------------------------------------------------------->
## <span style="color:darkseagreen">Chapter 1. Getting Started<span>
&emsp;&emsp;This chapter introduces most of the basic elements of C++: types, variables,
expressions, statements, and functions. Along the way, we’ll briefly explain how to
compile and execute a program.

<!--------------------------------------------------------------------------------------->
## <span style="color:darkseagreen">Compiling and Executing Our Program<span>
##### <span style="color:white">Compiling on GCC 6.0+<span>
```
g++ -std=c++11 app_name.cpp -o target
```
##### <span style="color:white">Compiling on clang 3.3+<span>
```
clang++ -std=c++11 app_name.cpp -o target
```
##### <span style="color:white">Executing Program<span>
```
./target
```
##### <span style="color:white">Show Result - UNIX<span>
```
echo %ERRORLEVEL%
```
##### <span style="color:white">Show Result - Windows<span>
```
echo $?
```
<br></br>


<!-- ********************************************************************************* -->
<!-- ********************************************************************************* -->
# <span style="color:darkseagreen">1.1. Writing a Simple C++ Program</span>
&emsp;&emsp;Every C++ program contains one or more functions , one of which must be named
main. The operating system runs a C++ program by calling main. Here is a simple
version of main that does nothing but return a value to the operating system:

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.1:</span>](exercise_1.1/exercise_1.1.cpp)

> **_QUESTION:_** Review the [documentation](https://gcc.gnu.org/onlinedocs/gcc-4.4.1/gcc/Overall-Options.html#index-file-name-suffix-71) for your compiler and determine what file naming convention it uses.
> 
> Compile and run the main program:
> ```
> int main()
> {
>   return 0;
> }
> ```
>
> **_ANSWER:_** C, C++, Objective-C or Objective-C++ header file to be turned into a precompiled header:
> 
> **_OUTPUT:_**
> ```
> file.cc
> file.cp
> file.cxx
> file.cpp
> file.CPP
> file.c++
> file.C
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.2:</span>](exercise_1.2/exercise_1.2.cpp)

> **_QUESTION:_** Change the program to return -1. A return value of -1 is
often treated as an indicator that the program failed. Recompile and rerun
your program to see how your system treats a failure indicator from main.
>
> **_OUTPUT:_**
> ```
> $ echo $?
> 255
> ```
<br></br>


<!-- ********************************************************************************* -->
<!-- ********************************************************************************* -->
# <span style="color:darkseagreen">1.2. A First Look at Input/Output</span>
&emsp;&emsp;The C++ language does not define any statements to do input or output (IO).
Instead, C++ includes an extensive standard library that provides IO (and many
other facilities). For many purposes, including the examples in this book, one needs to 
know only a few basic concepts and operations from the IO library:

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.3:</span>](exercise_1.3/exercise_1.3.cpp)

> **_QUESTION:_** Write a program to print Hello, World on the standard output.
>
> **_OUTPUT:_** 
> ```
> $ ./exercise_1.3.out
> Hello, World
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.4:</span>](exercise_1.4/exercise_1.4.cpp)
> **_QUESTION:_** Our program used the addition operator, +, to add two numbers.
> Write a program that uses the multiplication operator, *, to print the product instead.
>
> **_OUTPUT:_**
> ```
> $ ./exercise_1.4.out
> Enter two numbers:
> 3
> 7
> The multiplication of 3 and 7 is: 21
> ```
<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.5:</span>](exercise_1.5/exercise_1.5.cpp)

> **_QUESTION:_** We wrote the output in one large statement. Rewrite the
> program to use a separate statement to print each operand.
> 
> **_ANSWER:_** See source code.

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.6:</span>](exercise_1.6/exercise_1.6.cpp)

> **_QUESTION:_** Explain whether the following program fragment is legal.
> ```
> std::cout << "The sum of " << v1;
>          << " and " << v2;
>          << " is " << v1 + v2 << std::endl;
> ```
> If the program is legal, what does it do? If the program is not legal, why
> not? How would you fix it?
> 
> **_ANSWER:_**  The program is not legal because the first ```;``` ends the statement. The ```<< " and " << v2;``` and ```<< " is " << v1 + v2 << std::endl;``` is nor part of ```std::cout```.
<br></br>


<!-- ********************************************************************************* -->
<!-- ********************************************************************************* -->
# <span style="color:darkseagreen">1.3. A Word about Comments</span>
&emsp;&emsp;Before our programs get much more complicated, we should see how C++ handles
comments. Comments help the human readers of our programs. They are typically
used to summarize an algorithm, identify the purpose of a variable, or clarify an
otherwise obscure segment of code. The compiler ignores comments, so they have no
effect on the program’s behavior or performance:

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.7:</span>](exercise_1.7/exercise_1.7.cpp)

> **_QUESTION:_** Compile a program that has incorrectly nested comments.
> 
> **_ANSWER:_**
> ```
> exercise_1.7.cpp:3:3: error: empty character constant
>     3 | * ''cannot nest'' is considered source code,
>       |   ^~~~~~~~
> exercise_1.7.cpp:3:16: error: empty character constant
>     3 | * ''cannot nest'' is considered source code,
>       |                ^~
> exercise_1.7.cpp:2:23: error: ‘cannot’ does not name a type
>     2 | * comment pairs /* */ cannot nest.
>       |                       ^~~~~~
> make: *** [makefile:6: all] Error 1
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.8:</span>](exercise_1.8/exercise_1.8.cpp)

> **_QUESTION:_** Indicate which, if any, of the following output statements are
legal:
> ```
> std::cout << "/*";
> std::cout << "*/";
> std::cout << /* "*/" */;
> std::cout << /* "*/" /* "/*" */;
> ```
> After you’ve predicted what will happen, test your answers by compiling a
> program with each of these statements. Correct any errors you encounter.
> 
> **_ANSWER:_**
> 
> ```std::cout << "/*";``` is legal and outputs: ```/*```
> 
> ```std::cout << "*/";``` is legal and outputs: ```*/```
> 
> ```std::cout << /* "*/" */;``` is ilegal and can be fixed adding ```"``` just before ```;```
>
> ```std::cout << /* "*/" /* "/*" */;``` is legal and outputs: ```/*```


<!-- ********************************************************************************* -->
<!-- ********************************************************************************* -->
# <span style="color:darkseagreen">1.4. Flow of Control</span>
&emsp;&emsp;Statements normally execute sequentially: The first statement in a block is executed
first, followed by the second, and so on. Of course, few programs—including the one
to solve our bookstore problem—can be written using only sequential execution.
Instead, programming languages provide various flow-of-control statements that allow
for more complicated execution paths.

<!--------------------------------------------------------------------------------------->
<!--------------------------------------------------------------------------------------->
## <span style="color:darkseagreen">1.4.1. The while Statement</span>
&emsp;&emsp;A while statement repeatedly executes a section of code so long as a given condition
is true.

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.9:</span>](exercise_1.9/exercise_1.9.cpp)

> **_QUESTION:_** Write a program that uses a while to sum the numbers from 50 to 100.
> 
> **_ANSWER:_**
> ```
> Sum of 1 to 10 inclusive is 3825
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.10:</span>](exercise_1.10/exercise_1.10.cpp)

> **_QUESTION:_** In addition to the ++ operator that adds 1 to its operand, there is a
> decrement operator (--) that subtracts 1. Use the decrement operator to write a while
> that prints the numbers from ten down to zero.
> 
> **_ANSWER:_**
> ```
> 10
> 9
> 8
> 7
> 6
> 5
> 4
> 3
> 2
> 1
> 0
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.11:</span>](exercise_1.11/exercise_1.11.cpp)

> **_QUESTION:_** Write a program that prompts the user for two integers.
> Print each number in the range specified by those two integers.
> 
> **_ANSWER:_**
> ```
> Enter two integer numbers:
> 3
> 7
> 3
> 4
> 5
> 6
> 7
> ```

<!--------------------------------------------------------------------------------------->
<!--------------------------------------------------------------------------------------->
## <span style="color:darkseagreen">1.4.2. The for Statement</span>
&emsp;&emsp;In our while loop we used the variable val to control how many times we executed
the loop. We tested the value of val in the condition and incremented val in the
while body.

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.12:</span>](exercise_1.12/exercise_1.12.cpp)

> **_QUESTION:_** What does the following for loop do? What is the final value of sum?
> ```
> int sum = 0;
> for (int i = -100; i <= 100; ++i)
>     sum += i;
> ```
> 
> **_ANSWER:_**
> The loop increment variable ```i``` from -100 to 100. The final value of is **zero**.
> ```
> count: -100
> count: -99
> count: -98
> ...
> count: 98
> count: 99
> count: 100
> SUM: 0
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.13:</span>](exercise_1.13/exercise_1.13.cpp)

> **_QUESTION:_** Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
> ```
> #include <iostream>
> 
> int main()
> {
>     int sum = 0, val = 1;
>     // keep executing the while as long as val is less than or equal to 10
>     while (val <= 10)
>     {
>         sum += val; // assigns sum + val to sum
>         ++val; // add 1 to val
>     }
>     std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
> 
>     return 0;
> }
> ```
> 
> **_ANSWER:_**
> ```
> Sum of 1 to 10 inclusive is 55
> ```

<!--------------------------------------------------------------------------------------->
### <span style="color:darkseagreen">Exercise 1.14:</span>

> **_QUESTION:_** Compare and contrast the loops that used a for with those
using a while. Are there advantages or disadvantages to using either form?
> 
> **_ANSWER:_**
> 
> ```While``` is simpler to use and it's better when you don't know the scope, the amount of iterations or for infinite loops,
> 
> ```For``` is easier to use when the scope is limited, we know the the amount of iterations beforehand.

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.15:</span>](exercise_1.15/exercise_1.15.cpp)

> **_QUESTION:_** Write programs that contain the common errors discussed in
the box on page 16. Familiarize yourself with the messages the compiler
generates.
>
> ```
> int main (
> {
>     return 0
> }
> ```
>
> **_ANSWER:_**
> ```
> exercise_1.15.cpp:1:5: error: cannot declare ‘::main’ to be a global variable
>     1 | int main (
>       |     ^~~~
> exercise_1.15.cpp:3:5: error: expected primary-expression before ‘return’
>     3 |     return 0
>       |     ^~~~~~
> exercise_1.15.cpp:3:5: error: expected ‘}’ before ‘return’
> exercise_1.15.cpp:2:1: note: to match this ‘{’
>     2 | {
>       | ^
> exercise_1.15.cpp:2:2: error: expected ‘)’ before ‘return’
>     2 | {
>       |  ^
>       |  )
>     3 |     return 0
>       |     ~~~~~~
> exercise_1.15.cpp:1:10: note: to match this ‘(’
>     1 | int main (
>       |          ^
> exercise_1.15.cpp:4:1: error: expected declaration before ‘}’ token
>     4 | }
>       | ^
> make: *** [makefile:6: all] Error 1
> ```

<!--------------------------------------------------------------------------------------->
<!--------------------------------------------------------------------------------------->
## <span style="color:darkseagreen">1.4.3. Reading an unknown Number of Inputs</span>
&emsp;&emsp;In the preceding sections, we wrote programs that summed the numbers from 1
through 10. A logical extension of this program would be to ask the user to input a set
of numbers to sum. In this case, we won’t know how many numbers to add. Instead,
we’ll keep reading numbers until there are no more numbers to read.

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.16:</span>](exercise_1.16/exercise_1.16.cpp)

> **_QUESTION:_** Write your own version of a program that prints the sum of a set of integers read from cin.
> 
> **_ANSWER:_**
> ```
> Enter a integer value to sum and do a End-of-File (windows: CTRL+Z or UNIX: CTRL+D)
> 4
> 4
> 4
> The SUM is: 12
> ```

<!--------------------------------------------------------------------------------------->
<!--------------------------------------------------------------------------------------->
## <span style="color:darkseagreen">1.4.4. The if Statement</span>
&emsp;&emsp;Like most languages, C++ provides an if statement that supports conditional
execution. We can use an if to write a program to count how many consecutive
times each distinct value appears in the input.

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.17:</span>](exercise_1.17/exercise_1.17.cpp)

> **_QUESTION:_** What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?
> 
> **_ANSWER:_**
> 
> If all values are equal, the answer at the End-of-File is a total occurences count.
> 
> If are no duplicates values, the occurence count for each value is once time.
>


<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.18:</span>](exercise_1.18/exercise_1.18.cpp)

> **_QUESTION:_** Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.
> 
> **_ANSWER:_**
> If only equal values as input, the occours never be computed.
> ```
> 1 
> 1
> 1
> 1
> 1
> 1 occurs 5 times
> ```
>
> If giving values is not repeated, the occours are computed.
> ```
> 1
> 2
> 1 occurs 1 times
> 3
> 2 occurs 1 times
> 4
> 3 occurs 1 times
> 5
> 4 occurs 1 times
> 5 occurs 1 times
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.19:</span>](exercise_1.19/exercise_1.19.cpp)

> **_QUESTION:_** Revise the program you wrote for the exercises in § 1.4.1 (p.13) that printed a range of numbers so that it handles input in which the  first number is smaller than the second.
> 
> **_ANSWER:_**
> ```
> Enter the first number: 
> 1
> Enter the second number: 
> 5
> Sum of 1 to 10 inclusive is: 15
> ```

<!-- ********************************************************************************* -->
<!-- ********************************************************************************* -->
# <span style="color:darkseagreen">1.5. Introducing Classes</span>
&emsp;&emsp;In this section, we’ll describe a simple class that we can use in writing our bookstore
program. We’ll implement this class in later chapters as we learn more about types,
expressions, statements, and functions..

<!--------------------------------------------------------------------------------------->
<!--------------------------------------------------------------------------------------->
## <span style="color:darkseagreen">1.5.1. The Sales_item Class</span>
&emsp;&emsp;The only remaining feature we need to understand before solving our bookstore
problem is how to define a data structure to represent our transaction data. In C++
we define our own data structures by defining a class. A class defines a type along
with a collection of operations that are related to that type. The class mechanism is
one of the most important features in C++. In fact, a primary focus of the design of
C++ is to make it possible to define class types that behave as naturally as the built-
in types.

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.20:</span>](exercise_1.20/exercise_1.20.cpp)

> **_QUESTION:_** http://www.informit.com/title/032174113 contains a copy of
Sales_item.h in the Chapter 1 code directory. Copy that file to your
working directory. Use it to write a program that reads a set of book sales
transactions, writing each transaction to the standard output.
> 
> **_ANSWER:_**
> ```
> Enter the read ISBN, number of copies sold, and sales price. Ex.: 0-201-70353-X 4 24.99
> 0-201-70353-X 4 24.99
> The number of copies sold, total revenue, and average price is: 
> 0-201-70353-X 4 99.96 24.99
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.21:</span>](exercise_1.21/exercise_1.21.cpp)

> **_QUESTION:_** Write a program that reads two Sales_item objects that
have the same ISBN and produces their sum.
> 
> **_ANSWER:_**
> ```
> Enter the read ISBN, number of copies sold, and sales price of book 1. Ex.: 0-201-70353-X 4 24.99
> 0-201-70353-X 4 24.99
> Enter the read ISBN, number of copies sold, and sales price of book 2. Ex.: 0-201-70353-X 4 24.99
> 0-201-70353-X 4 50.43
> The number of copies sold, total revenue, and average price of book 1 is: 0-201-70353-X 4 99.96 24.99
> The number of copies sold, total revenue, and average price of book 2 is: 0-201-70353-X 4 201.72 50.43
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.22:</span>](exercise_1.22/exercise_1.22.cpp)

> **_QUESTION:_** Write a program that reads several transactions for the same
ISBN. Write the sum of all the transactions that were read.
> 
> **_ANSWER:_**
> ```
> Enter the read ISBN of book. Ex.: 0-201-70353-X 4 24.99
> 0-201-70353-X 4 24.99
> 0-201-70353-X 2 24.99            
> 0-201-70353-X 10 23.99           
> The number of copies sold, total revenue, and average price of book is:  16 389.84 24.365
> ```

<!--------------------------------------------------------------------------------------->
<!--------------------------------------------------------------------------------------->
## <span style="color:darkseagreen">1.5.2. A First Look at Member Functions</span>
&emsp;&emsp;...

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.23:</span>](exercise_1.23/exercise_1.23.cpp)

> **_QUESTION:_** Write a program that reads several transactions and counts
how many transactions occur for each ISBN.
> 
> **_ANSWER:_**
> ```
> Enter the read ISBN of book. Ex.: 0-201-70353-X 4 24.99
> 0-201-70353-X 4 24.99
> There are 1 transactions of ISBN 0-201-70353-X
> 0-201-70353-X 4 24.99
> There are 2 transactions of ISBN 0-201-70353-X
> 0-201-70353-X 4 24.99
> There are 3 transactions of ISBN 0-201-70353-X
> 0-201-70353-X 4 24.99
> There are 4 transactions of ISBN 0-201-70353-X
> ```

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.24:</span>](exercise_1.24/exercise_1.24.cpp)

> **_QUESTION:_** Test the previous program by giving multiple transactions
representing multiple ISBNs. The records for each ISBN should be grouped
together.
> 
> **_ANSWER:_**
> ```
> Enter the read ISBN of book. Ex.: 0-201-70353-X 4 24.99
> 0-201-70353-X 4 24.99
> 0-201-70353-X 4 24.99
> 0-201-70353-X 4 24.99
> 0-201-70354-X 4 24.99
> 
> ISBN: 0-201-70353-X
> Occurrences: 3
> Average price: 24.99
> 
> 0-201-70354-X 4 24.99
> 0-201-70354-X 4 24.99
> 
> 
> ISBN: 0-201-70354-X
> Occurrences: 3
> Average price: 24.99
> ```

<!-- ********************************************************************************* -->
<!-- ********************************************************************************* -->
# <span style="color:darkseagreen">1.6.  The Bookstore Program</span>
&emsp;&emsp;We are now ready to solve our original bookstore problem. We need to read a file of
sales transactions and produce a report that shows, for each book, the total number
of copies sold, the total revenue, and the average sales price. We’ll assume that all
the transactions for each ISBN are grouped together in the input.

<!--------------------------------------------------------------------------------------->
### [<span style="color:darkseagreen">Exercise 1.25:</span>](exercise_1.25/exercise_1.25.cpp)

> **_QUESTION:_** Using the Sales_item.h header from the Web site,
compile and execute the bookstore program presented in this section.
> 
> **_ANSWER:_**
> ```
> 0-201-70353-X 4 24.99
> 0-201-70353-X 4 24.99
> 0-201-70354-X 4 24.99
> 0-201-70353-X 8 199.92 24.99
> 0-201-70354-X 4 24.99
> 0-201-70354-X 8 199.92 24.99
> ```

<br></br>

Chapter 01 | [Chapter 02](../chapter_02) | [Chapter 03](../chapter_03) |
[Chapter 04](../chapter_04) | [Chapter 05](../chapter_05) | [Chapter 06](../chapter_06) |
[Chapter 07](../chapter_07) | [Chapter 08](../chapter_08) | [Chapter 09](../chapter_09)

[HOME](https://github.com/sergio-de-oliveira/book-cpp-Primer-5th-Edition)