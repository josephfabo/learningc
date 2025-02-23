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
