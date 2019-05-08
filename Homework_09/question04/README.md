# Question 4

(Eckel 6.1, 6.2, 6.3) Write a simple class called Simple with a constructor that prints something to tell you that it's been called. In main() make an object of your class.  

Add a destructor to your class that prints out a message to tell you that it's been called.  

Modify the class to contain an int member. Modify the constructor so that it takes an int argument that it stores in the class member. Both the constructor and destructor should print out the int value as part of their message, so you can see the objects as they are created and destroyed.

Compile Steps:
	
	g++ q4.cpp	

Output:

	Value in Simple Constructor: 15
	Value in Simple Destructor: 15

