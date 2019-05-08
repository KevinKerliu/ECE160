## Question 8

(Eckel 7.4) Create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively. Create a main() that makes an object of your class and calls each of the member functions. Now modify the class so it has instead a single member function with all the arguments defaulted. Does this change your main()?

Compile Steps:

    g++ q8.cpp
    g++ modified_q8.cpp

Output:

    ./q8.exe output
    In memberFunction0
    In memberFunction1
    In memberFunction2
    In memberFunction3


    ./modified_q8.exe output
    In modifiedMemberFunction
