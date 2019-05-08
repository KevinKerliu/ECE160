## Question 5

(Eckel 6.10) Create a class without any constructors, and show that you can create objects with the default constructor. Now create a nondefault constructor (one with an argument) for the class, and try compiling again. Explain what happened.

Compile Steps:
	
	g++ q5.cpp

Output:

	Rebecca
	3
	Peter Cooper
	3.5


Explanation/Comparison:

	When I created a class without constructors, I created objects without any arguments. I was still able to use functions like setName() and setGpa() in order to give the object values. After using the set functions I then used getName() and getGpa() to retrieve that data. When I added a constructor into the class, I was able to give the object arguments from the moment it was initialized. This means that I could use the get functions right away without setting anything first. I could then use the set functions to change the values if I wanted to. When the class had no constructors I had to declare the object with the following: student s1; In addition, I could not overwrite the default contructor (student()) since it was not explicitly declared in the class. When I added a constructor I had to initialize an object with the following: student s1(string name, int gpa); 

