## Question 5

(Eckel, 14.3) Create a three-level hierarchy of classes with default constructors, along with destructors, both of which announce themselves to cout. Verify that for an object of the most derived type, all three constructors and destructors are automatically called. Explain the order in which the calls are made.

Compile Steps:

    g++ q5.cpp

Output:

    Yo it's gramps
    I'm your daddy
    RALPHIE IN THE HOUSE
    Peace out homies
    Au revoir from ya dad
    Gramps says cya

Explanation:

    The order in which the calls are made is logical as when the the object of
    the most derived type is made in main, the constructors are called from
    outermost/base class to innermost/most derived class. When the 
    deconstructors are called, the order is from most derived to base. This all
    adds up because when considering the dependency of the derived class on the
    base class, the base class must first be created so that the derived class
    can also be made. Similarly, the reverse order is necessary for
    deconstructing.
