## Question 1
Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers. Also, determine the ranges of the various floating-point types. (K&R Exercise 2-1)

Compilation Step:

	gcc q1.c

Output:

	signed char min: -128
	signed char max: 127
	signed short min: -32768
	signed short max: 32767
	signed int min: -2147483648
	signed int max: 2147483647
	signed long min: 0
	signed long max: -1

	unsigned char min: 0
	unsigned char max: 255
	unsigned short min: 0
	unsigned short max: 65535
	unsigned int min: 0
	unsigned int max: -1
	unsigned long min: 0
	unsigned long max: -1

	float min: 1.175494E-38
	float max: 3.402823E+38
	double min: 2.225074E-308
	double max: 1.797693E+308
	long double min: 2.121989E-314
	long double max: 2.121989E-314
