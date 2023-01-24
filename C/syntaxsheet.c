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
char %c  // character - single character, 1 byte of memory, -128 - 127.
float %f  // floating point value - 32bit
double %d  // Double point value - 64bit
int %i  // integer - 32bit signed integer, -2^31-1 - 2^31 (-2,147,483,649 - 2,147,483,648). Unsigned is 4,294,967,296.
long %li  // long integer - 64bit signed integer, -2^63-1 - 2^63 (-9,223,372,036,854,775,809 - 9,223,372,036,854,775,808) unsigned is 18,446,744,073,709,551,616
string %s  // string
bool // anything other than the value of 0 is considered true. 0 is false
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

//Arrays
//arrays are a way to store information back to back in memory for easier access and to allow for certain functionality
//below is how to create an array with 3 32bit ints
int scores[3];
// this will create a 3*4 byte memory allocation for the 3 32 bit ints.
scores[0] = 72;
scores[1] = 73;
scores[2] = 33;
// this way you don't need to create seperate variables for each score
printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3); // this will find the average of the scores by adding each indexed position together and dividing by a float value of 3
for (int i = 0; i < 3; i++)
{
	scores[i] = get_int("Score: ") // a better way to prompt for input when storing in scores. (cs50)
}

float average(int array[]); // creating a function that returns a float and takes an array of ints as an argument

float average(int array[])
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum = sum + array[i];
	}
	return sum / (float) i;
}

//making strings without cs50
//strings are just arrays of characters
//strings are 1 byte per length + 1 for a \0. the reason for the backslash is to represent absolute 0, not the char representation of 0
//printf will print every character until it hits a \0 like printing an array in a for loop
//this \n is also called nul.

string text = "string here"; // initializing a string here is utilizing the cs50 library, you usually can't do this.

//below gives an idea on how things are stored and how strings are really just char arrays
//this is still a terrible way to print strings
string words[2];
words[0] = "HI!";
words[1] = "BYE!";

printf("%C%C%C\n", words[0][1], words[0][1], words[0][2]);
printf("%C%C%C%c\n", words[1][1], words[1][1], words[1][2], words[1][3]);

//the below piece of code can be used to get the length of a string
string name = get_string("What is your name? ");

int n = 0;
while (name[n] != '\0')
{
	n++;
}
printf("%i\n", n);

//this is the general library to use for strings, not cs50
#include <string.h>
#include <ctype.h> // great library for types

//command line arguments
//obviously, just like linux programs written in C, you can make command line arguments for your program.
#include<cs50.h>
#include<stdio.h>

int main(int argc, string argv[]) //argc is to grab the number of arguments, argv is a string array for prompts
{
	printf("Hello, %s\n", argv[1]); //here we're passing in the first argument into a printf function
}
//running the program followed by a string will print "Hello, string_here"
//argv[0] is the program name itself
//you can use argc for contitionals such as if the user only passed in one argument which means argc == 2. one for the program, one for the first argument

//return status for main
//becuase main is an int it returns a value
//if it return's 0, the program will quit
//others are for returning error codes, you create your own error codes.
//an example might be if not enough command line arguments are supplied I choose to return 1 and then
//in some manual I can refer error code 1 to missing command line arguments.