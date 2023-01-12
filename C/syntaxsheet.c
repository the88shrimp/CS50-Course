//comments

/*
Group comments
*/

// Statements must be terminated with a semicolon ;
// characters and strings must be encased in single quotes '' and double quotes "" respectively.

#include <stdio.h>  // includes the standard IO header file for user input/output
#include <cs50.h>  // includes the cs50's header file for user input

// The define here is called a preprocessor directive (macro) and can be used by the compiler to replace every instance of PLACEHOLDER with REPLACEMENT, best practice to use caps for the PLACEHOLDER name
#define PLACEHOLDER REPLACEMENT
// this is good to prevent magic numbers by substituting constant numbers with a name. This is because the data doesn't need to actually take up memory with needing to be variable data.

int main(void)  // Main function that will be executed on program execution 
{

}

printf("Hello, world");  // print function (does not include \n naturally)

string name = "my_name";  // Initializing a variable with a value, (String is a cs50 library type, not standard)
int number 42;  // Initializing a variable with a value
const  // put before a variable when initializing to prevent the variable from ever being mofified
// In C, there is no true bool types, instead, anything that isn't 0 is true, 0 is false.

// if/else conditionals
if (x > y)
{
	
}
else if (x < y)
{
	
}
else (x == y)
{
	
}

// Switch statements
// Switch statements don't rely on boolean expressions
// Important to break otherwise you'll continue executing the next one
int x = GetInt();
switch(x) // this is the data that get's analyzed by the switch statements
{
	case 1:  // Will execute if the switch statement's value is 1
		printf("One\n");
		break;
	case 2:  // Will execute if the switch statement's value is 2
		printf("Two\n");
		break;
	case 3:  // Will execute if the switch statement's value is 3		
		printf("Three\n");
		break;
	default:  // Will execute if there are no matching switch statements
		printf("Sorry\n");
}
// Great for executing anything below such as making a countdown sequence starting from a given input

int x = (expr) ? 5 : 6; // this is a short hand way of making an if/else where the value of 5 will be x if the bool expression is true, 6 if false

// Arithmatic, relational and logical operators.
+  // Addition
-  // Subtraction
*  // Multiplication
/  // Division
%  // Remainder
++  // Increment integer by 1
--  // Decrement integer by 1 
==  // Equal comparison
!=  // Not equal to comparison
>  // Greater than comparison
<  // Less than comparison
>=  // Greater than comparison or equal to comparison
<=  // Less  than or equal to comparison
&&  // And operator
||  // Or operator
!  // Not operator

// when dealing with floats you need to proactively change a value to a float before doing math
int x = 1;
int y = 3;

float z = (float) x / (float) y;
printf("%f\n", z);
printf("%.20f\n",z);  // If you want to display more decimals you can specify after but before the %
// this will likely result in imprecision due to the lack of bits
// in this case use a double type

// When printing a variable, it has to be represented first by a placeholder that declares the type
%c  // character - single character, 1 byte of memory, -128 - 127.
%f  // floating point value - 32bit
%d  // Double point value - 64bit
%i  // integer - 32bit signed integer, -2^31-1 - 2^31 (-2,147,483,649 - 2,147,483,648). Unsigned is 4,294,967,296.
%li  // long integer - 64bit signed integer, -2^63-1 - 2^63 (-9,223,372,036,854,775,809 - 9,223,372,036,854,775,808) unsigned is 18,446,744,073,709,551,616
%s  // string
void  // This is a type that doesn't contain a value and is to represent something with no return value

int x = get_int("x: ");
int x = get_int("y: ");

printf("%i\n", x + y);

//An aditional way to modify an int's vaule is to do the following
int a = 1;  // Initializing a variable with the value 1
a += 1;  // incrementing the value by 1
a -= 2;  // decrementing the value by 2

// loops
// the following loop is standard practice of starting from 0 and counting to a less than value
// while loop
int i = 0;  // setting an int to use as a counter
while (i < 3)  // creating the loop with conditions
{
	printf("meow\n");  // do this every iteration
	i++;  // incrementing i by 1 every iteration as to not cause an infinite loop
}

// for loop
for (int i = 0; i < 3; i++)  // within one line, create the counter variable, the condition for how much it iterates and the change in the variable, the variable change only occurs after the first loop.
{
	printf("meow\n");
}

// infinite loop
while (true)
{
	
}

// Do while loop
// great for if you want a loop to execute once no matter what, and then decide weather to do it again or not.
// great for prompting for input
int n;  // Declare a variable
do  // start of loop
{
	n = get_int("Size: ");  // prompt (cs50 only)
}
while (n < 1);  // break condition

// Functions
// Functions need to be placed before the main function, however, you can put the first line of a function 
// before main to tell the compiler that there are functions with this name below main

// A function that has no arguments but returns a value from input
int get_size(void)  // declaring the function name and assigning the return value's data type. Void means it takes no arguments
{
	int n;
	do
	{
		n = get_int("Size: ");
	}
	while (n < 1);
	return n;  // returning whatever was in the function's n variable
}

// A function that doesn't return a value but does take in an argument
void print_grid(int size)  // no return value so start with void, need to declare the type in the argument
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

