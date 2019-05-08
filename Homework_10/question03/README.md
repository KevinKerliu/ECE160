## Question 3

(Eckel, 11.17) Create a class that contains a double*. The constructor initializes the double* by calling new double and assigning a value to the resulting storage from the constructor argument. The destructor prints the value that’s pointed to, assigns that value to -1, calls deletefor the storage, and then sets the pointer to zero. Now create a function that takes an object of your class by value, and call this function in main( ). What happens? Fix the problem by writing a copy-constructor.

Compile Steps:

	g++ q3.cpp	

Output:

	Without Copy Constructor:

	func(e) is called:
	Inside func(example e). Value of *d: 6
	Inside destructor. Value of *d for Example 1: 6
	Inside destructor. Value of *d for Example 1: 0
	Inside destructor. Value of *d for Example 1: 0

	With Copy Constructor:

	func(e) is called:
	Inside func(example e). Value of *d: 6
	Inside destructor. Value of *d for Copied Example 1: 6
	Inside destructor. Value of *d for Copied Copied Example 1: 6
	Inside destructor. Value of *d for Example 1: 6



Explanation:

	When passing the object by value into a function and returning it, the returned object contains a pointer to a double of value 0, rather than the value that the original object contained. This is because the pointer to the original object was not being preserved. I also got a segmentation fault when using delete without the copy constructor because the actual pointer didn't live beyond the function in order to be deleted inside the destructor. Adding a copy constructor solved both of these problems because I was able to make a copy of the object to send to the function. This way there is a new object that lives beyond the life of the function.
