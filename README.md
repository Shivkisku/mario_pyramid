### mario_pyramid

This C code is a simple implementation of a program that prints a pyramid pattern, similar to the structures seen in the Mario video game. Here's a breakdown of the code:

The code includes the standard input/output library stdio.h.

The print_mario function is declared, which takes an integer a and a character pointer b as parameters. This function is responsible for printing a specific character b 'a' number of times.

In the main function:

The code prompts the user to input the height of the pyramid and continues to do so until a valid input is provided (between 1 and 8, inclusive).
It initializes the variable print as 1.
It enters a while loop that continues until the height becomes 0.
Inside the loop, it calls the print_mario function to print spaces, followed by a specific number of # characters, then two spaces, and again a specific number of # characters, as required by the pyramid pattern.
It increments the print variable and decrements the height variable.
It prints a new line after each iteration of the loop.
The print_mario function:

It takes two arguments: an integer a and a character pointer b.
It uses a for loop to print the character represented by the character pointer b 'a' number of times.
Overall, this code constructs a simple pyramid pattern based on the user's input, where each row of the pyramid consists of 'height' number of '#' characters with spaces in between, and the number of '#' characters increases as you go down the pyramid.



```
gcc -o main main.c
```
```
./main
```
