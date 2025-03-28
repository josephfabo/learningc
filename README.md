# learningc
High-level and low-level programming refer to the level of abstraction. C is a middle-level language. Variables are like water in a cup—before use, they must be initialized. Unlike constants, variables can change over time. Multiple variables can be initialized in one line (e.g., int var1, var2, var3). Avoid long variable names and unnecessary spaces.

Notes on the Code:

	1.	First Program (Switch Case for Directions)
	•	Takes a character input (w, a, s, or d).
	•	Uses a switch statement to print the corresponding direction:
	•	'w' → “Up”
	•	's' → “Down”
	•	'a' → “Left”
	•	'd' → “Right”
	•	If an invalid input is given, prints “Wrong”.
 
	2.	Second Program (Printing Stars using do-while Loop)
	•	Takes an integer input (stars).
	•	Uses a do-while loop to print * stars times.
	•	Ensures at least one * is printed even if stars is 0.
 
	3.	Third Program (Printing Numbers in a Range using do-while Loop)
	•	Takes two integer inputs: start and end.
	•	Uses a do-while loop to print numbers from start to end.
	•	Ensures at least one number is printed even if start > end.
 
	4.	Fourth Program (Accessing an Array by Index)
	•	Defines an array t with 12 floating-point values.
	•	Takes an integer input i and prints the ith element of t.
	•	No boundary check on i, which may cause out-of-bounds access.
 
	5.	Fifth Program (Counting 1s in an Array using for Loop)
	•	Defines an array results[] with 28 float values (only 0 and 1).
	•	Uses a for loop to iterate over the array and sum up 1s.
	•	Prints the total count of 1s in the array.

 Structures is a user-defined data type that groups related variables of different data types. Structure declaration includes the keyword struct, a structure tag for referencing the structure, and curly brace{} with a list of variables declarations called members. You access the members of struct variable by using the (dot operator) between the variable name and the member name. Typedef is commonly used with structures because it eliminates the need to use the keyword struct when declaring variables

Unions allows to store different data types in same memory location. It is like astructure but has members. However, union variable uses same location to store all its members and only one member at a time time can occupy the memory location. union declaration uses the keyword union, a union tag and curly baces {} with a list of members. You acccess the members of a union varaible by using the .dot operator

Memory management is an important aspect of c programming. When you declare a variable, c automatically allocates space for the variable called stack. An int variable is typically allocated 4 bytes when declared. The stdlib.h library includes memory management functions. The statement '#include stdlib.h' gives you access to the following functions: malloc(), calloc(), realloc(), and free()

In c programming, an external file can be opened, read from and written in the c program. C include FILE type for defining a stream. file stream keeps track of where reading and writing last occured. The stdio.h library includes file handlinfg functions. he statement '#include stdio.h' gives you access to the following functions: fopen(), fclose(), fgetc(), fgets() fscan(), fputc(), fputs() and fprintf()

<h3>🛠 Projects</h3>

- 💻 &nbsp; Simple C Calculator: https://github.com/josephfabo/learningc/blob/main/calculator.c


