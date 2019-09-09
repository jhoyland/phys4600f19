

/*  This is a comment .

	Comments are ignored by the compiler and so you can write whatever you like. */


/* <--- a comment starts with a slash and star like this 

and ends with a star and slash like this --->  */


/*

	You should use comments extensively in your code to make it easier for others to understand.
	Comments are also useful during debugging to temporarily disable pieces of code for when you are trying to track down an error.
	Just surround the code with comment symbols and the compiler will ignore it. This is called "commenting out" code.

	By the way this is a c style comment

*/ 


// You can also comment out like this. Everything from the slashes to the end of the line is a comment.

// The double slash is actully from the later c++ language but it was so useful they put it back into standard c.



/*Pre-processor directives*/

/*Include header files
Header files give your code access to functions for a wide variety of purposes. Without some of these files C is practically uselss
The form is #include <filename.h>

Where filename.h is the name of the header file.
.h files are text files like .c files. Whereever you put the #include the entire file is basically copied and pasted into your file at the time of compilation
*/

/* stdlib.h and stdio.h contain a huge number of very common functions. Basically you should just include these 2 in any program you ever write */
#include <stdlib.h>
#include <stdio.h>
/*	math.h contains  math functions. Might as well include this too. If you use math.h you should make sure to add the option -lm at the command line when you compile */
#include <math.h>



int main()
{

	// Variables must have a unique name, they can contain letter in upper or lower case, any number and the underscore character:
	// However it CANNOT BEGIN WITH A NUMBER.
    // ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_0123456789
	// No spaces or other characters. There is a maximum name length for some systems e.g. microsoft C is 2048 characters
	//____ is a legal C variable name - don't ever do this!


	// When writing longer programs, particularly as partof a team. It is useful to stick to some conventions for naming:
	//
	// Use meaningful names especially for important variables. Often people use full words or even phrases.
	// For example, suppose you have a variable which is supposed to hold the power level of a transmitter
	// some name conventions for this might be:
	//
	// TransmitterPower
	// tranmitterPower
	// transmitter_power
	// tx_power
	// tx_pwr
	// TXpwr ,  not bad , tx is a common abreviation for transmit (rx is used for receive) 
	// tp ,  not a good name unless it is a temporary variable maybe used just to hold an intermediate value in a calculation
	// x , awful name - it conveys no meaning to the reader of the code
	// 
	// Avoid all caps, these names are commonly used for macros (created using #define - explained later). e.g. #define MAX_RECORD_LENGTH 128
	// Sometimes people prefix names with a letter or two to indicate type, e.g. fData would indicate a floating point value.
	//		Note this is purely for human readability, the compiler has no idea what the 'f' means.
	//		This is helpful for longer programs where the declaration may be a long way from where the variable is being used
	// 
	//		
	//
	// Variables in C must be "declared" before they can be used


	int x;   // NOTE:ALL statements in C must end in a semicolon UNLESS they are followed by curly braces {} (in the cases of for/while loops and switch statements )
	int y;	int z;    // Conversely the semicolon ends a statement so you can have multple statements on one line

	// The first time you specify what value goes in the variable is called "initialization"
	x = 5;
	y = 3;
	// Declaration and initialization can be done together:
	int a = 4;

	// WARNING: depending on platform the value of the un-initialized variable is not guarenteed. i.e. z above does not necessarily = 0
	// NOTE: You can have declarations anywhere within a function but the variable cannot be initialized or used until after the declation
	// BEST PRACTICE: keep all declarations together at the beginning of the function if possible makes them easier to find and avoids possible traps in branching code

	// Arithmetic takes the following form:
	// The variable where you want the  result to go is on the left, the operations on the right

	z = x + y;

	// This

	x + y;

	// Is perfectly legal but useless, the math is done but the result is lost

	// For math operations you will generally want to use double or float types

	double dx = 0.75;
	double dy = 0.22;

	double dz = 0;

	dz = dx * sin(dy);


	// Math operations evaluated according to the table of precedence:

	/*


	*/




	// Arrays:
	/*
	You can also use a single variable name to store a list of values called arrays
	*/

	int a[10];

	/* Here a consists of 10 integers. These are physically stored in a block of consecutive memory. As with other variables, uninitialized they will have uncertain values	 */


	/*elements of the array can be accessed like so.*/

	a[7] = 2;

	/*the first element in a c array is indexed 0. so a has elements a[0], a[1], a[2] .... a[9]   all 10 can be treated like separate variables.
			The variable a on its own (without the square brackets) has a special meaning which we will come to later */

	/*the size of an array cannot be changed in c 
				( There are ways around this but we won't go into them just now as it is rather more complicated)  */

	return 0;  // Functions which return a value MUST contain at least one return statement
}






{


	// Conditionals

	if(x > 3)
	{
		/* 
			If the test in the 
		*/

	}

	//Kinds of loops

	for(i=0;i<n;i++)
	{
		// this section will repeat until i<n is not true. Other tests are possible
		// the variable i is modified after each cycle, in this case i is increased by 1 but other increments and even decrements are possible e.g: 
		// The test is done at the beginning of the section so 

		// for loops are generally used when you need to repeat a block of code a fixed number of times, especially if you need to keep track of which cycle you are up to

		// It is legal to modify the value of i just like any other variable within the for loop. For example if you wanted to get out of the loop early you might set i=n at some point.
		// However this practice is not generally recommended as it can lead to unexpected results and 
	}


	while(a<b)
	{
		// While loops repeat until the test in the while statement is no longer true. 
		// As with for loops this test is only performed at the start of each repeat, if the test is not true when the while loop is first encountered it will never execture
		// While loops are used when the number of repeats is not not known in advance. For example if you were trying to do a Newton-Raphson root find where you repeat the procedure
		// until it converges you might use a while loop
	}

	do
	{
		// do-while loops are identical to while loops except that the test is done at the end which means the code in the loop will execute at least once.
	}
	while(a<b)

	// Infinite loops: These will all loop forever.

	for(;;)
	{

	}

	while(1)
	{

	}

	do
	{

	}
	while(1)

	/*
		You can exit out of a loop early (even an infinite one) using the break command

	*/

	for(x=0;x<10;x++)
	{

		if(x == 5) break;  // This would cause the loop to end  when x reaches 5.
	}

	/*

		GOOD PROGRAMMING PRACTICE NOTE: break statements can cause problems which are hard to debug in more complex programs and so are generally discouraged.
	*/


}