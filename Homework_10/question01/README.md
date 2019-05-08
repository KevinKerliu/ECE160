## Question 1

(Eckel, 10.16) Create a header file containing a namespace. Inside the namespace create several function declarations. Now
create a second header file that includes the first one and continues the namespace, adding several more function declarations. Now create a cpp file that includes the second header file. Alias your namespace to another (shorter) name. Inside a function definition, call one of your functions using scope resolution. Inside a separate function definition, write a using directive to introduce your namespace into that function scope, and show that you don’t need scope resolution to call the functions from your namespace.

Compile Steps: 

    g++ -I.  -c main.cpp -o main.o
    g++ -I.  -c one.cpp -o one.o
    g++ -I.  -c two.cpp -o two.o
    g++ -I.  -o main main.o one.o two.o
    
    *Note: I made some blank cpps just to compile with a makefile
    
Output:

    Entering functionDeclaration01
    Exiting functionDeclaration01
    Entering functionDeclaration02
    Entering functionDeclaration01
    Exiting functionDeclaration01
    Exiting functionDeclaration02
    Entering functionDeclaration03
    Entering functionDeclaration01
    Exiting functionDeclaration01
    Entering functionDeclaration02
    Entering functionDeclaration01
    Exiting functionDeclaration01
    Exiting functionDeclaration02
    Exiting functionDeclaration03
