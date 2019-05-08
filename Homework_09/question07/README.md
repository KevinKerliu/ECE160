## Question 7

(Eckel 7.2) Create a Message class with a constructor that takes a single string with a default value. Create a private member string, and in the constructor simply assign the argument string to your internal string. Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument, which it prints in addition to the internal message. Does it make sense to use this approach instead of the one used for the constructor?

Compile Steps:
    
    g++ q7.cpp

Output:

    I am a default value
    I am an additional message I am a default value
